# 📚 University Management System (C++ / OOP Project)

A simple **University Management System** implemented in modern **C++**, showcasing **Object-Oriented Programming (OOP)** concepts such as **inheritance**, **dynamic memory management**, and the **Rule of Three**. Built and organized using **CMake**.

---

## ✨ Features
- **Person Class**
  - Base class with `name`, `age`, `id`, and `email`.
  - Constructors, copy constructor, destructor, getters/setters.

- **Student Class**
  - Inherits from `Person`.
  - Manages a dynamic array of `grades`.
  - Adds grades and calculates **GPA**.
  - Implements constructor, copy constructor (deep copy), and destructor.

- **Course Class**
  - Contains `courseName`, `courseCode`, and `credits`.
  - Maintains a list of enrolled students (`std::vector<Student*>`).
  - Methods to add/remove students and display enrolled students.

---

## ⚙️ Build & Run (CMake)
This repo does **not** include a `main.cpp` with test cases.  
👉 Users are expected to create their own `main.cpp` in the `src/` folder to test and run the system.  

Example workflow:
```bash
# clone the repo
git clone https://github.com/<your-username>/University_Management_System.git
cd University_Management_System

# create build directory
mkdir build && cd build

# configure and build
cmake ..
cmake --build .

# run executable (if you added a main.cpp)
./ums
