# 📊 Categorizing Array Operations in C++

This C++ project implements the `Categorizing` class, which manages a dynamic integer array and provides a menu-driven interface for performing common data structure operations, including **Selection Sort**, **Merge Sort**, **Linear Search**, and **Binary Search**.

## ✨ Features

* **Dynamic Array Allocation:** The array size is determined at runtime.
* **Sorting Algorithms:**
    * **Selection Sort:** Implemented for both **Ascending** and **Descending** order.
    * **Merge Sort:** Implemented for both **Ascending** and **Descending** order.
* **Searching Algorithms:**
    * **Linear Search:** Simple, sequential search.
    * **Binary Search:** Efficient search on a **sorted** array.
* **Menu-Driven Interface:** Easy interaction via a main menu in the console.

## 📁 Files

The project consists of two logical parts, typically organized into the following files:

| File | Description |
| :--- | :--- |
| `main.cpp` | Contains the `main` function, which drives the menu, handles user input, and interacts with the `Categorizing` class. |
| `Categorizing.cpp` | Contains the definition of the `Categorizing` class, including the array management, sorting methods (`selectionSort`, `mergeSort`), and searching methods (`linearSearch`, `binarySearch`). |

***Note:** Your provided code combines both the `main.cpp` and `Categorizing.cpp` content, but they are logically separated by the `#include "Categorizing.cpp"` directive.*

## ⚙️ Compilation and Execution

Since the implementation is split into a header-like file (`Categorizing.cpp`) and a main file (`main.cpp`), you can compile it using a standard C++ compiler like **g++**.

**Assuming the code is split into `main.cpp` (first part) and `Categorizing.cpp` (second part):**

1.  **Compile:**
    ```bash
    g++ main.cpp Categorizing.cpp -o array_categorizer
    ```
2.  **Execute:**
    ```bash
    ./array_categorizer
    ```

### Example Session
Enter array size: 5 arr[0] = 50 arr[1] = 20 arr[2] = 80 arr[3] = 10 arr[4] = 60

========= MENU =========

1. Selection Sort Ascending ...
2. Display Array
3. Exit Enter choice: 1

Selection Sort Ascending Completed.

========= MENU ========= ... Enter choice: 7

Array : 10 20 50 60 80

========= MENU ========= ... Enter choice: 6 Enter value to search: 50 Found at index 2

========= MENU ========= ... Enter choice: 0 Exiting...

## 🧠 Algorithm Details

### Selection Sort

* **Concept:** Divides the array into two subarrays: a sorted part and an unsorted part. It repeatedly finds the smallest (or largest) element from the unsorted subarray and swaps it with the first element of the unsorted subarray.
* **Time Complexity:** $\mathcal{O}(n^2)$ in all cases.



### Merge Sort

* **Concept:** A **Divide and Conquer** algorithm. It recursively divides the array into halves until it gets individual elements. Then, it merges the two halves in a sorted manner.
* **Time Complexity:** $\mathcal{O}(n \log n)$ in all cases, making it faster than Selection Sort for large datasets.



### Binary Search

* **Requirement:** The array **must** be sorted.
* **Concept:** Repeatedly divides the search interval in half. It compares the target value with the middle element. If they are not equal, the half in which the target cannot lie is eliminated, and the search continues on the remaining half.
* **Time Complexity:** $\mathcal{O}(\log n)$.

---
