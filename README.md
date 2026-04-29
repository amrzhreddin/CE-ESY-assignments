Circular Queue (Ring Buffer) in C

Overview

This program implements a Circular Queue (Ring Buffer) using a fixed-size array in C. It demonstrates how to efficiently store and retrieve characters in a FIFO (First In, First Out) manner with wrap-around indexing.

Key Concepts

- Circular indexing using modulo ("%")
- Queue operations (push & pop)
- Fixed memory allocation
- Safe string input handling

Program Flow

1. The user is prompted to enter a name.
2. The program appends "_CE_ESY" to the input.
3. Each character is inserted into the circular queue.
4. Characters are removed from the queue and stored in a result array.
5. The final processed string is printed.

Data Structure

typedef struct {
    char data[CAPACITY];
    int start;
    int end;
    int count;
} CircularQueue;

Functions

- "setup()" → Initializes the queue
- "empty()" → Checks if the queue is empty
- "full()" → Checks if the queue is full
- "push()" → Inserts a character into the queue
- "pop()" → Removes a character from the queue

Example

Input:  Ahmed
Output: Ahmed_CE_ESY

Notes

- Input is handled using "fgets" to avoid buffer overflow issues.
- The queue has a fixed capacity ("CAPACITY = 20").
- If the queue is full, insertion is prevented.
- If the queue is empty, removal returns "'\0'".

Compilation & Execution

gcc main.c -o program
./program

Purpose

This project is intended for educational purposes to understand how circular buffers work in low-level programming using C.
