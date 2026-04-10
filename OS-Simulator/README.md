OS Scheduler & Memory Management Simulator

📁 Folder Structure

OS-Simulator/
│
├── main.cpp
├── Process.h
├── Process.cpp
│
├── Scheduler/
│   ├── FCFS.cpp
│   ├── SJF.cpp
│   ├── RoundRobin.cpp
│   └── Priority.cpp
│
├── Memory/
│   ├── FirstFit.cpp
│   ├── BestFit.cpp
│   └── WorstFit.cpp
│
├── Utils/
│   ├── GanttChart.cpp
│   └── InputHandler.cpp
│
└── README.md

## Project Flow
1. User chooses algorithm
2. Enter number of processes
3. Input process details
4. Run scheduling
5. Show Gantt chart
6. Show metrics##

## Description
Developed a modular Operating System Simulator in C++ implementing CPU scheduling algorithms (FCFS, SJF, Round Robin, Priority) and memory allocation strategies (First Fit, Best Fit, Worst Fit), with Gantt chart visualization and performance metric analysis.