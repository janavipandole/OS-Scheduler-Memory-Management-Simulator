#include <iostream>
#include <vector>
#include "Process.h"


using namespace std;

void fcfsScheduling(vector<Process> &processes);
void roundRobinScheduling(vector<Process> &processes, int quantum);

int main()
{
    int n;
    cout << "Enter number of processes: ";
    cin >> n;

    vector<Process> processes;

    for (int i = 0; i < n; i++)
    {
        int at, bt;
        cout << "\nEnter Arrival Time for P" << i + 1 << ": ";
        cin >> at;
        cout << "Enter Burst Time for P" << i + 1 << ": ";
        cin >> bt;

        processes.push_back(Process(i + 1, at, bt));
    }

    fcfsScheduling(processes);

    int quantum;
    cout << "Enter Time Quantum: ";
    cin >> quantum;

    roundRobinScheduling(processes, quantum);

    return 0;
}