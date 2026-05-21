# Student Management System
## Overview

This project is a **Student Management System** developed in **C++** using **Object-Oriented Programming (OOP)** concepts and **STL vectors**.

The system allows users to manage multiple student records through a **menu-driven program**. Users can add students, display records, search students using roll number, and find the topper based on total marks.

This project focuses on:

* Class and Object usage
* STL Vector
* Searching and Traversing
* Menu-Driven Programming
* Result Calculation Logic

---

## Features

* Add multiple students
* Store student details and marks
* Calculate total marks
* Calculate average marks
* Display all students
* Search student by roll number
* Find topper student
* Menu-driven interface
* Uses STL `vector`

---

## Project Structure

### Class: `Student`

Stores:

* Student Name
* Roll Number
* Subject Marks
* Total Marks
* Average Marks

The project stores multiple student objects using STL vectors.

Example:

```cpp id="qwtw1t"
std::vector<Student> students;
```

---

## STL Used

### Vector

The STL `vector` is used to:

* Dynamically store multiple student records
* Easily add new students
* Traverse and manage data efficiently

---

## Menu Options

```text id="c6nt0k"
1. Add Student
2. Display Students
3. Search by Roll Number
4. Find Topper
5. Exit
```

---

## Example Output

```text id="zt7t1t"
------ Student Management System ------

1. Add Student
2. Display Students
3. Search by Roll Number
4. Find Topper
5. Exit

Enter Choice : 1

Enter Name : Yashwanth
Enter Roll Number : 21

Enter Marks
Math : 90
Physics : 85
Chemistry : 95

Student Added Successfully
```

---

## Concepts Used

* C++ Classes and Objects
* STL Vector
* Functions
* Loops
* Searching Logic
* Menu-Driven Programs
* Input/Output Streams

---

## Technologies Used

* Language: C++
* Compiler: g++
* IDE: VS Code / Code::Blocks

---

## How to Run

### Compile

```bash id="ej1ywa"
g++ main.cpp -o main
```

### Run

For Linux/Mac:

```bash id="p03d9v"
./main
```

For Windows:

```bash id="mpdrdv"
main.exe
```

---

## File Structure

```text id="gzc7di"
project/
│
├── main.cpp
├── README.md
```

---

## Future Improvements

* File handling for permanent storage
* Update student details
* Delete student records
* Sorting students using custom comparator
* Grade system
* GUI version using C++ frameworks

---

## Learning Outcomes

By building this project, you can learn:

* How to use STL vectors in real projects
* Managing multiple objects in C++
* Searching records efficiently
* Menu-driven program design
* Student data management logic

---

## Author

Created by Yashwanth Krishna using C++ and STL vectors.

