# Lab 1 – C++ Programming

## Overview

This repository contains the solutions for **Lab 1**. The lab focuses on basic C++ programming concepts such as arrays, loops, classes, objects, and basic data processing.

The programs are written in C++ and are kept simple to demonstrate the concepts covered in the lab.

---

## Tasks Included

### Task 2 – Array Sum

In this task, an integer array of size 5 is declared.

The program:

1. Reads five integers from the user.
2. Stores the values in the array.
3. Uses a second loop to calculate their sum.
4. Displays the total.

**Concepts used:**

* Arrays
* `for` loops
* User input using `cin`
* Output using `cout`
* Accumulating values using a variable

### Task 3 – Student Class

This task introduces the basic concept of **classes and objects** in C++.

A `Student` class is created with two public data members:

* `rollNumber`
* `marks`

A `display()` member function is also defined to display the student's information.

Inside `main()`, two objects, `s1` and `s2`, are created. Values are assigned to their data members using the **dot (`.`) operator**.

The marks of the first student are then updated to demonstrate that object data can be changed after assigning the initial values.

**Concepts used:**

* Classes
* Objects
* Public data members
* Member functions
* Dot operator
* Updating object data

### Task 4 – Largest and Smallest Values

In this task, the program reads 8 integers into an array and finds:

* The largest value
* The index of the largest value
* The smallest value
* The index of the smallest value

The first element of the array is initially considered both the largest and smallest value. The remaining elements are then checked using a loop.

The program uses the `>` and `<` operators to update the values and their corresponding indices.

If a value occurs more than once, the program reports the **first occurrence** because the index is only updated when a strictly larger or smaller value is found.

**Concepts used:**

* Arrays
* Loops
* Finding minimum and maximum values
* Array indexing
* Conditional statements
* Tracking indices

---

## How to Run

You need a C++ compiler such as **G++** to compile these programs.

### Using the Terminal

Open the terminal in the folder containing the `.cpp` file.

For example:

```bash
g++ task2.cpp -o task2
```

Then run the program:

```bash
./task2
```

On Windows, if using MinGW/G++, you can run:

```bash
task2.exe
```

The same process can be followed for the other tasks.

---

## Example

For the array:

```text
10 25 7 42 18 42 5 30
```

The program will find:

```text
Largest value: 42
Index of largest value: 3

Smallest value: 5
Index of smallest value: 6
```

Since `42` occurs twice, the program reports index `3`, which is its first occurrence.

---

## Concepts Practiced

Through these tasks, the following basic C++ concepts are practiced:

* Variables and data types
* Arrays
* Array indexing
* `for` loops
* `if` statements
* User input and output
* Classes and objects
* Member functions
* Dot operator
* Finding minimum and maximum values
* Keeping track of indices

---

## Language

**C++**

## Lab

**Lab 1**

The programs are written as basic practice exercises to strengthen understanding of arrays, loops, and introductory object-oriented programming concepts.
