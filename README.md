# OS Scheduler & Memory Management Simulator

A modular **Operating System Simulator** built in **C++** that demonstrates core OS concepts such as **CPU Scheduling** and **Memory Management**.

This project is designed to simulate how an operating system handles process execution and memory allocation using commonly used algorithms.

---

## 🚀 Features

### CPU Scheduling Algorithms
- **FCFS (First Come First Serve)**
- **SJF (Shortest Job First)**
- **Round Robin**
- **Priority Scheduling**

### Memory Management Algorithms
- **First Fit**
- **Best Fit**
- **Worst Fit**

### Additional Features
- **Gantt Chart Visualization**
- **Completion Time Calculation**
- **Turnaround Time Calculation**
- **Waiting Time Calculation**
- **Performance Metrics Analysis**

---

## 📁 Folder Structure

```text
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
```

---

## 🔄 Project Flow

1. User chooses scheduling algorithm
2. Enter number of processes
3. Input process details
4. Run selected scheduling algorithm
5. Display Gantt chart
6. Show process metrics

---

## 🧠 Metrics Used

Turnaround Time:

\[
TAT = Completion\ Time - Arrival\ Time
\]

Waiting Time:

\[
WT = Turnaround\ Time - Burst\ Time
\]

---

## 💻 Sample Input

```text
Enter number of processes: 3

Enter Arrival Time for P1: 0
Enter Burst Time for P1: 5

Enter Arrival Time for P2: 0
Enter Burst Time for P2: 4

Enter Arrival Time for P3: 0
Enter Burst Time for P3: 2

Enter Time Quantum: 2
```

---

## 📊 Sample Output

```text
Gantt Chart:
| P1 | P2 | P3 | P1 | P2 | P1 |

Process Details:
PID     AT      BT      CT      TAT     WT
1       0       5       11      11      6
2       0       4       10      10      6
3       0       2       6       6       4
```

---

## 🛠️ Tech Stack
- **C++**
- **Object-Oriented Programming**
- **Data Structures**
- **Queue / Priority Queue**
- **Operating System Concepts**

---

## 🎯 Purpose
This project was developed to strengthen understanding of:

- Process Scheduling
- CPU Time Sharing
- Memory Allocation
- OS Performance Metrics
- Modular Software Design

---

## 📌 Future Enhancements
- GUI based visualization
- Multi-Level Queue Scheduling
- Deadlock Detection
- Paging and Segmentation
- Process Comparison Dashboard

---

## 👩‍💻 Author
**Janavi Pandole**