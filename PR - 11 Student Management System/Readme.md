# Student CRUD Operation Program in C++

A **console-based C++ program** to manage student records using **Vectors** and **Templates**.  
The program allows you to **add, display, delete, and search students** by their ID.

![Student CRUD Demo](https://github.com/Rajdeep5270/the-cpp-diaries/blob/master/PR%20-%2011%20Student%20Management%20System/StudentCrud.gif)

---

## Features

- Add new student records (ID and Name)  
- Prevent duplicate student IDs  
- Display all student records  
- Delete student records by ID  
- Search for a student by ID  
- Menu-driven console interface  
- Uses C++ **templates** and **vectors** for dynamic storage  

---

## Technologies

- C++ (Standard C++17 or higher)  
- `<vector>` for dynamic arrays  
- Template programming for flexible ID and Name types  

---

## How it Works

1. The program uses a `MemoryCalculate` template class with two vectors: `id` and `name`.  
2. CRUD operations are implemented as class member functions:  
   - `addStudent()` → Adds a new student if the ID doesn’t exist.  
   - `displayStudent()` → Displays all student records.  
   - `removeStudent()` → Deletes a student by ID.  
   - `searchStudent()` → Finds a student by ID.  
3. The main menu loop allows users to perform operations until they choose **Exit**.  
4. Input is handled carefully using `getline` and `cin >> ws` to avoid skipped inputs.  

---

## Code Structure

MemoryCalculate.cpp // Contains the template class
main.cpp // Contains the main menu and program logic

---

## How to Run

1. Clone the repository:
  ```bash
  git clone <your-repo-url>

3. Compile the program:
  g++ main.cpp -o student_crud

4. Run the program:
  ./student_crud   # on Linux/Mac
  student_crud.exe # on Windows

5. Follow the menu to add, display, delete, or search students:
  Student CRUD Operation Program

  1. Add Student
  2. Display all Students
  3. Delete Student Record
  4. Search Student
  0. Exit

  Enter your choice: 1
  Enter Student ID: 101
  Enter Student Name: Rajdeep
  Successfully Added
```
---

## Notes
- Only unique student IDs are allowed.
- The program uses vectors internally, so the number of students is dynamic.
- Works in any standard C++ compiler that supports templates and vectors.

## 🙌 Author

👨‍💻 Rajdeep Singh  
Web Developer | Creative Coder | Animation Enthusiast  

🌐 Portfolio: [rajdeepsingh.vercel.app](https://rajdeepsingh.vercel.app)  
🔗 GitHub: [github.com/Rajdeep5270](https://github.com/Rajdeep5270)  
💼 LinkedIn: [linkedin.com/in/rajdeep-singh](https://www.linkedin.com/in/rajdeep-singh/)  
