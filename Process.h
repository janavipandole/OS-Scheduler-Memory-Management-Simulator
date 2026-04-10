#ifndef PROCESS_H
#define PROCESS_H

class Process
{
public:
    int pid;
    int arrivalTime;
    int burstTime;
    int completionTime;
    int waitingTime;
    int turnaroundTime;

    Process(int id, int at, int bt)
    {
        pid = id;
        arrivalTime = at;
        burstTime = bt;
        completionTime = 0;
        waitingTime = 0;
        turnaroundTime = 0;
    }
};

#endif