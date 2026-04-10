#include <iostream>
#include <vector>
#include <queue>
#include "../Process.h"

using namespace std;

void roundRobinScheduling(vector<Process> &processes, int quantum)
{
    int n = processes.size();
    vector<int> remainingTime(n);
    queue<int> q;

    int currentTime = 0;
    int completed = 0;

    // Remaining burst time initialize
    for (int i = 0; i < n; i++)
    {
        remainingTime[i] = processes[i].burstTime;
    }

    for (int i = 0; i < n; i++)
    {
        q.push(i);
    }

    cout << "\nGantt Chart:\n| ";

    while (!q.empty())
    {
        int i = q.front();
        q.pop();

        cout << "P" << processes[i].pid << " | ";

        if (remainingTime[i] > quantum)
        {
            currentTime += quantum;
            remainingTime[i] -= quantum;
            q.push(i); // dubara queue me
        }
        else
        {
            currentTime += remainingTime[i];
            processes[i].completionTime = currentTime;
            processes[i].turnaroundTime =
                processes[i].completionTime - processes[i].arrivalTime;
            processes[i].waitingTime =
                processes[i].turnaroundTime - processes[i].burstTime;

            remainingTime[i] = 0;
            completed++;
        }
    }

    cout << "\n\nProcess Details:\n";
    cout << "PID\tAT\tBT\tCT\tTAT\tWT\n";

    for (auto &p : processes)
    {
        cout << p.pid << "\t"
             << p.arrivalTime << "\t"
             << p.burstTime << "\t"
             << p.completionTime << "\t"
             << p.turnaroundTime << "\t"
             << p.waitingTime << "\n";
    }
}