# Operating Systems Last Minute Notes

![Operating System](https://github.com/aasthad27/Operating-system/assets/89932857/f7280092-180f-4d7b-84d3-10a73eaeb1c1)

Welcome to the Operating Systems Last Minute Notes repository! This README provides a concise overview of essential concepts related to operating systems.

## Table of Contents
- [Introduction](#introduction)
- [Function of Operating Systems](#function-of-operating-systems)
- [Types of Operating Systems](#types-of-operating-systems)
  - [Batch OS](#batch-os)
  - [Multiprogramming OS](#multiprogramming-os)
  - [Multiprocessing OS](#multiprocessing-os)
  - [Multitasking OS](#multitasking-os)
  - [Real-Time OS](#real-time-os)
  - [Distributed OS](#distributed-os)
  - [Clustered OS](#clustered-os)
  - [Embedded OS](#embedded-os)

## Introduction
An operating system serves as an interface between hardware and users. It facilitates resource management, process scheduling, storage management, memory management, and more.

## Function of Operating Systems
- **Resource Management**
- **Process Management (CPU Scheduling)**
- **Storage Management (Hard Disk)**
- **Memory Management (RAM)**
- **Security and Privacy**

  ## Types of Operating Systems 
### Batch OS
Batch OS processes jobs in the main memory sequentially. While it enhances throughput, it lacks interactivity and debugging can be challenging.

![Batch OS](https://github.com/aasthad27/Operating-system/assets/89932857/9f0b919a-7908-43c5-9309-c4654638683d)

**Advantages:**
- Efficient for managing large workloads.
- Supports multiple users.

**Disadvantages:**
- Requires skilled operators.
- Debugging is complex.

### Multiprogramming OS
This type allows multiple programs to be present in memory simultaneously, enhancing throughput and response time.

![Multiprogramming OS](https://github.com/aasthad27/Operating-system/assets/89932857/f1112e94-dea1-45d7-980a-856a015becc0)

**Advantages:**
- Increased throughput.
- Reduced response time.

**Disadvantages:**
- Limited user interaction with resources.

### Multiprocessing OS
Multiprocessing OS utilizes multiple CPUs for resource execution, increasing throughput and providing redundancy.

![Multiprocessing OS](https://github.com/aasthad27/Operating-system/assets/89932857/9ef8e31a-6d50-4e91-a718-7d68d51e3ffa)

**Advantages:**
- Enhanced throughput.
- Redundancy for fault tolerance.

**Disadvantages:**
- Complexity due to multiple CPUs.

### Multitasking OS
Multitasking OS runs multiple programs concurrently using Round-Robin Scheduling, improving user experience.

![Multitasking OS](https://github.com/aasthad27/Operating-system/assets/89932857/301d0f24-e163-4272-a33b-e63f69890d90)

**Advantages:**
- Simultaneous execution of multiple programs.
- Efficient memory management.

**Disadvantages:**
- Increased system heat for heavy programs.

### Real-Time OS
Real-Time OS allocates fixed time slots to tasks, ensuring equal opportunities and reducing CPU idle time.

![Real-Time OS](https://github.com/aasthad27/Operating-system/assets/89932857/1dbc48b1-9a0e-498e-9a20-d9f0b794f698)

**Advantages:**
- Equal opportunity for tasks.
- Reduced CPU idle time.

**Disadvantages:**
- Reliability concerns.
- Security and data communication issues.

### Distributed OS
Distributed OS connects autonomous computers in a network, enabling remote access and resource sharing.

![Distributed OS](https://github.com/aasthad27/Operating-system/assets/89932857/2c60d6b2-88c9-423e-a7d5-76d74f04ebb0)

**Advantages:**
- Remote access to resources.
- Enhanced resource sharing.

**Disadvantages:**
- Complexity due to network communication.

### Clustered OS
Clustered OS involves merging multiple systems to perform the same task, enhancing performance and redundancy.

### Embedded OS
Embedded OS provides fixed functionality for devices like ACs and washing machines, enabling specific tasks.

### Life Cycle Of OS

![Screenshot (26)](https://github.com/aasthad27/Operating-system/assets/89932857/c0d8eb1f-51b9-46a1-8f1a-68e14b6edf73)

MY Reference diagram, 

you can go through :

![Screenshot (27)](https://github.com/aasthad27/Operating-system/assets/89932857/4ae7b0da-e8d1-491f-be83-457f68620bc5)

### Important Linux Commands 

[](https://www.digitalocean.com/community/tutorials/linux-commands)

### System calls 

There are Two Modes
User Mode 
Kernal Mode

In computing, a system call is a programmatic way in which a computer program requests a service from the kernel of the operating system it is executed on. A system call is a way for programs to interact with the operating system. A computer program makes a system call when it makes a request to the operating system’s kernel. System call provides the services of the operating system to the user programs via Application Program Interface(API). It provides an interface between a process and an operating system to allow user-level processes to request services of the operating system. System calls are the only entry points into the kernel system. All programs needing resources must use system calls.

A system call is initiated by the program executing a specific instruction, which triggers a switch to kernel mode, allowing the program to request a service from the OS. The OS then handles the request, performs the necessary operations, and returns the result back to the program.






