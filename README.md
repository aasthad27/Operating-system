# Operating-system


Last Minute Notes To Visit


Operating System is an interface between hardware and user 

What to expect 
1) Process scheduling :
    
      FIFO
   
      SJF
   
      Round Robin
3) Process Synchronization :
   
      Semaphore
4) Deadlocks And threads :
   
      Bankers algo
5) Memory Management :
   
      Paging
   
      Segmentation
   
      Fragmentation
   
      Virtual memory
   
      Page Replacement Algo
6) Disk Scheduling :
   
      SCAN
   
      CSCAN
   
      FCFS
7) UNIX Commands :
   
      ls, dir, cd, open system calls
8) File Management Security :
   
    seq, random, linked

### Operating System and its Function

![Screenshot (19)](https://github.com/aasthad27/Operating-system/assets/89932857/f7280092-180f-4d7b-84d3-10a73eaeb1c1)

1)Resource Management

2)Process Management(CPU Scheduling)

3)Storage Management(Hard Disk)

4)Memory Management (RAM)

5) Security and Privacy 

### Types of Operating Systems

1)BATCH OS- Jobs are stored in the main memory, the job is assigned to the CPU when the previous jobs are executed.

![Screenshot (20)](https://github.com/aasthad27/Operating-system/assets/89932857/9f0b919a-7908-43c5-9309-c4654638683d)

Advantages :

It is very difficult to guess or know the time required for any job to complete. Processors of the batch systems know how long the job would be when it is in the queue.

Multiple users can share the batch systems.

The idle time for the batch system is very less.

It is easy to manage large work repeatedly in batch systems.

Disadvantages :

The computer operators should be well known with batch systems.

Batch systems are hard to debug.

It is sometimes costly.

The other jobs will have to wait for an unknown time if any job fails.

2)MULTIPROGRAMMING OS-Non Primitive 

can be simply illustrated as more than one program is present in the main memory and any one of them can be kept in execution. This is basically used for better execution of resources.

![Screenshot (21)](https://github.com/aasthad27/Operating-system/assets/89932857/f1112e94-dea1-45d7-980a-856a015becc0)

Advantages :

Multi Programming increases the Throughput of the System.
It helps in reducing the response time.

Disadvantages :

There is not any facility for user interaction of system resources with the system.

3)MULTIPROCESSING OS-

is a type of Operating System in which more than one CPU is used for the execution of resources. It betters the throughput of the System.
![Screenshot (22)](https://github.com/aasthad27/Operating-system/assets/89932857/9ef8e31a-6d50-4e91-a718-7d68d51e3ffa)

Advantages

It increases the throughput of the system.

As it has several processors, so, if one processor fails, we can proceed with another processor.

Disadvantages

Due to the multiple CPU, it can be more complex and somehow difficult to understand.

4)MultiTasking  - Primitive

Multitasking Operating System is simply a multiprogramming Operating System with having facility of a Round-Robin Scheduling Algorithm. It can run multiple programs simultaneously.

![Screenshot (23)](https://github.com/aasthad27/Operating-system/assets/89932857/301d0f24-e163-4272-a33b-e63f69890d90)

Advantages :

Multiple Programs can be executed simultaneously in Multi-Tasking Operating System.
It comes with proper memory management.

Disadvantages :

The system gets heated in case of heavy programs multiple times.

5)Real Time 

Each task is given some time to execute so that all the tasks work smoothly. Each user gets the time of the CPU as they use a single system. These systems are also known as Multitasking Systems. The task can be from a single user or different users also. The time that each task gets to execute is called quantum. After this time interval is over OS switches over to the next task.

![Screenshot (24)](https://github.com/aasthad27/Operating-system/assets/89932857/1dbc48b1-9a0e-498e-9a20-d9f0b794f698)

Advantages :

Each task gets an equal opportunity.

Fewer chances of duplication of software.

CPU idle time can be reduced.

Resource Sharing: Time-sharing systems allow multiple users to share hardware resources such as the CPU, memory, and peripherals, reducing the cost of hardware and increasing efficiency.

Improved Productivity: Time-sharing allows users to work concurrently, thereby reducing the waiting time for their turn to use the computer. This increased productivity translates to more work getting done in less time.

Improved User Experience: Time-sharing provides an interactive environment that allows users to communicate with the computer in real time, providing a better user experience than batch processing.

Disadvantages :

Reliability problem.

One must have to take care of the security and integrity of user programs and data.

Data communication problem.

High Overhead: Time-sharing systems have a higher overhead than other operating systems due to the need for scheduling, context switching, and other overheads that come with supporting multiple users.

Complexity: Time-sharing systems are complex and require advanced software to manage multiple users simultaneously. This complexity increases the chance of bugs and errors.

Security Risks: With multiple users sharing resources, the risk of security breaches increases. Time-sharing systems require careful management of user access, authentication, and authorization to ensure the security of data and software.

6)Distributed 

These types of operating system is a recent advancement in the world of computer technology and are being widely accepted all over the world and, that too, at a great pace. Various autonomous interconnected computers communicate with each other using a shared communication network. Independent systems possess their own memory unit and CPU. These are referred to as loosely coupled systems or distributed systems. These systems’ processors differ in size and function. The major benefit of working with these types of the operating system is that it is always possible that one user can access the files or software which are not actually present on his system but some other system connected within this network i.e., remote access is enabled within the devices connected in that network. 
![Screenshot (25)](https://github.com/aasthad27/Operating-system/assets/89932857/2c60d6b2-88c9-423e-a7d5-76d74f04ebb0) 

7)Clustered 
Computer clusters have each node set to perform the same task, controlled and produced by the software. Clustered Operating Systems work similarly to Parallel Operating Systems as they have many CPUs. Cluster systems are created when two or more computer systems are merged.

8)Embedded
Fixed Functionality Operating System
Example: AC, Washing machine has a fixed functionality so there OS is also Embedded .



