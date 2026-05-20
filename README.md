# Student Management System - README

## Overview

This project is a simple **Student Management System** written in **C++** using **Object-Oriented Programming (OOP)** concepts.

The program takes student details and marks as input, then calculates:

* Total Marks
* Average Marks

This project mainly demonstrates the use of **Inheritance** in C++.

---

## Features

* Add student details
* Store subject marks
* Calculate total marks
* Calculate average
* Uses Inheritance

---

## OOP Structure

### Base Class: `Student`

Stores:

* Student Name
* Roll Number

### Derived Class: `Mark`

Inherits from `Student`

Stores:

* Subject Marks

### Derived Class: `Result`

Inherits from `Mark`

Calculates:

* Total Marks
* Average Marks

---

## Inheritance Flow

```text
Student
   ↓
Mark
   ↓
Result
```

---

## Example Output

```text
Enter Student Name : Yashwanth
Enter Roll Number : 21

Enter Marks of 3 Subjects
Math : 90
Physics : 85
Chemistry : 95

------ Student Result ------
Name : Yashwanth
Roll Number : 21

Total Marks : 270
Average : 90
```

---

## Concepts Used

* C++ Classes
* Objects
* Inheritance
* Functions
* Encapsulation
* Input/Output Streams

---

## Technologies Used

* Language: C++
* Compiler: g++
* IDE: VS Code / Code::Blocks

---

## How to Run

### Compile

```bash
g++ main.cpp -o main
```

### Run

For Linux/Mac:

```bash
./main
```

For Windows:

```bash
main.exe
```

---

## File Structure

```text
project/
│
├── main.cpp
├── README.md
```

---

## Future Improvements

* Store multiple students
* File handling
* Search by roll number
* Sorting students using STL
* Menu-driven system
* Grade calculation

---

## Learning Outcomes

By building this project, you can learn:

* How inheritance works in C++
* Basic OOP concepts
* Data handling using classes
* Result calculation logic

---

## Author

Created by Yashwanth Krishna using C++ and OOP concepts.
