# Character Length Finder & Cubed Matrix Indicator (C++ Programs)

This repository contains two C++ programs:

1. A **Character Length Finder** that calculates the number of characters in a string using pointers.
2. A **Matrix Cubing Program** that takes a square matrix as input, cubes each element, and processes it via a separate function (`cubedArray`) defined in an external file (`indicatorFunctions.cpp`).

Both programs are explained in detail below with input/output flow and usage instructions.

---

## Program 1: Character Length Finder Using Pointer

### 📄 Description

This program takes a string input (name) from the user and calculates its character length manually using a pointer. It does not use built-in string length functions like `strlen()`.

### 💡 Features

- Accepts a string (up to 19 characters) from the user.
- Uses a pointer to traverse the character array.
- Manually counts characters until the null terminator `\0`.


### 🧠 Code Logic

1. Define a character array `name[20]`.
2. Take user input using `cin`.
3. Use a pointer `ptr` to point to the base address of `name`.
4. Traverse using a loop until the null character is found.
5. Increment a `count` variable for each character.
6. Print the final count.

---

## Program 2: Cubing a Square Matrix Using External Function

### 📄 Description

This program accepts a square matrix of user-defined size, takes its elements as input, and processes it using an external function `cubedArray()` located in `indicatorFunctions.cpp`.

### 📁 Dependencies

- `indicatorFunctions.cpp`: Contains the definition of the `cubedArray()` function.

### 🧮 Input Flow

1. Accepts a single integer `size` for both rows and columns (only square matrices supported).
2. Prompts the user to enter each element of the matrix.
3. Passes the matrix to `cubedArray()` function via pointer arithmetic (`&a[0][0]`).

### 🔗 External File (indicatorFunctions.cpp)

Assumes `cubedArray(int *ptr, int size)` is defined in `indicatorFunctions.cpp`, which cubes every element in the matrix and likely displays or processes the results.

### 🧠 Code Logic

1. Define a 2D square matrix `a[size][size]`.
2. Take matrix size and input values from user.
3. Display prompt messages for better user experience.
4. Call `cubedArray()` and pass the matrix as a flat pointer.
   - This enables pointer-based manipulation inside the function.

### 🖼️ Reference GIFs

Program Execution Preview (GIFs):

**Program 1 Output Demo:**
![Program 1 Demo](https://github.com/Rajdeep5270/the-cpp-diaries/raw/master/PR%20-%207%20Indicator/q-1.gif)

**Program 2 Output Demo:**
![Program 2 Demo](https://github.com/Rajdeep5270/the-cpp-diaries/raw/master/PR%20-%207%20Indicator/q-2.gif)

---

## 🧪 Compilation & Execution

To compile and run the programs, ensure both `.cpp` files are in the same directory.

**Command:**
## g++ main.cpp indicatorFunctions.cpp -o output
## ./output

## 👨‍💻 Author

**Rajdeep Singh Shekhawat**

### 🌐 Portfolio

[https://rajdeepghosh.dev](https://rajdeepghosh.dev)
