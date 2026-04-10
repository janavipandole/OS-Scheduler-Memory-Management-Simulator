#include <iostream>
#include <vector>
#include "../Process.h"

using namespace std;

void fcfsScheduling(vector<Process> &processes)
{
    int currentTime = 0;

    cout << "\nGantt Chart:\n| ";

    for (auto &p : processes)
    {
        if (currentTime < p.arrivalTime)
        {
            currentTime = p.arrivalTime;
        }

        p.completionTime = currentTime + p.burstTime;
        p.turnaroundTime = p.completionTime - p.arrivalTime;
        p.waitingTime = p.turnaroundTime - p.burstTime;

        cout << "P" << p.pid << " | ";

        currentTime = p.completionTime;
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