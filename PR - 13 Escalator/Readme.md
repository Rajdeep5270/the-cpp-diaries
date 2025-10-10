# 🧱 Stack CRUD Operation using C++ (OOP Approach)

This project implements a **Stack (LIFO)** data structure in C++ using **Object-Oriented Programming** concepts like **abstract classes**, **inheritance**, and **encapsulation**. It allows basic stack operations through a menu-driven interface.

> 📁 This project is part of the [The C++ Diaries](https://github.com/Rajdeep5270/the-cpp-diaries) repository — PR #13: Escalator Stack CRUD Operation.

## 📽️ Demo

![Stack Operations Demo](https://github.com/Rajdeep5270/the-cpp-diaries/blob/master/PR%20-%2013%20Escalator/StackCrudOperation.gif)

## 📌 Features

- Push an element onto the stack
- Pop an element from the stack
- View the top element
- Check if the stack is empty
- Check if the stack is full
- Exit the program

## 🧠 Concepts Used

- **Abstract Classes** and **Pure Virtual Functions**
- **Dynamic Memory Allocation**
- **Encapsulation** for data protection
- **Constructor/Destructor** for resource management
- **Menu-driven UI** via console

## 🗂️ Project Structure

StackCrudOperation/
│
├── main.cpp # Main logic for menu and user interaction
├── Stack.cpp # Stack class implementation using OOP
├── README.md # Project description and guide

## 📄 Code Overview

### Abstract Class: `StackMethods`

```cpp
class StackMethods {
public:
    virtual void push(int element) = 0;
    virtual void pop() = 0;
    virtual void topElement() = 0;
    virtual void isEmpty() = 0;
    virtual void isFull() = 0;
};

Concrete Class: Stack
Implements the abstract class and provides functionality using:
- int* arr: dynamically allocated array
- int top: index of top element
- int size: max size of the stack
- int count: total elements pushed

Main Function
The main() function interacts with the user via a console menu and allows dynamic stack operations.
```

🛠️ How to Run
Prerequisites
- A C++ compiler (like g++)
- C++17 or later recommended

Compile and Run
- g++ main.cpp -o stackApp
- ./stackApp

✅ Sample Output

Enter Number of Stack Elements : 3

1. Push
2. Pop
3. Top Element
4. isEmpty
5. isFull
0. Exit
Enter Your Choice : 1

Enter Stack Element : 10

...

🧼 Possible Improvements

- Add error handling for non-integer input
- Display stack content
- Use STL stack for comparison
- Separate interface and implementation using headers
