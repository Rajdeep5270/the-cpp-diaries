# 🏦 C++ Banking Management System  

A console-based **Banking System** built in C++ using **Object-Oriented Programming (OOP) principles**.  
It simulates real-world banking operations like deposits, withdrawals, interest calculations, overdrafts, and account information management for different types of accounts.  

---

## ✨ Features  

### 🔹 Common Features (All Accounts)
- **Create Account** → Enter account holder details and set up an account with a minimum deposit of $1000.  
- **Deposit Money** → Add money to the account balance.  
- **Withdraw Money** → Withdraw funds (with conditions based on account type).  
- **Balance Inquiry** → Check remaining balance.  
- **Account Information** → View account details (Name, Number, Type, Balance).  
- **Exit** → Close the program safely.  
- **Error Handling** → Shows messages for invalid inputs.  

---

### 🔹 Savings Account
- 5% yearly **interest rate** on the balance.  
- Standard deposit and withdrawal functionality.  
- Displays yearly interest calculation.  

📸 Demo:  
![Savings Account Demo](https://github.com/Rajdeep5270/the-cpp-diaries/blob/master/PR%20-%2010%20Bank%20Mangement%20System/Code%20Output/savingsAccount.gif)  

---

### 🔹 Checking Account
- **Overdraft Limit** of $50,000.  
- If withdrawal exceeds balance, overdraft is used.  
- Deposit first clears overdraft, then adds to balance.  
- 2.5% yearly **interest rate** on the balance.  
- Shows overdraft usage and remaining balance.  

📸 Demo:  
![Checking Account Demo](https://github.com/Rajdeep5270/the-cpp-diaries/blob/master/PR%20-%2010%20Bank%20Mangement%20System/Code%20Output/chekcingAccount.gif)  

---

### 🔹 Fixed Deposit Account
- Higher **interest rate** of 7.5% yearly.  
- Standard deposit/withdrawal functionality.  
- Shows yearly interest calculation.  

📸 Demo:  
![Fixed Deposit Demo](https://github.com/Rajdeep5270/the-cpp-diaries/blob/master/PR%20-%2010%20Bank%20Mangement%20System/Code%20Output/fixedAccount.gif)  

---

## ⚙️ Technical Concepts Used
- **OOP Concepts** → Inheritance, Polymorphism (Virtual Functions), Encapsulation.  
- **Virtual Inheritance** → To avoid diamond problem in multiple inheritance.  
- **Interest Calculation** → Different formulae based on account type.  
- **Overdraft Handling** → Realistic simulation for Checking Accounts.  
- **System Commands** → Clear screen, user input handling.  

---

## 📂 Project Structure

```text
BankAccount (Base Class)
├── addAccount()
├── deposit()
├── withdrawlBalance()
├── getBalance()
├── getAccountInfo()
├── exit()
└── invalidChoice()

SavingsAccount (Derived)
└── calculateSavingsInterest()

CheckingAccount (Derived)
├── checkOverdraft()
├── calculateCheckingInterest()
├── remainingBalance()
└── depositCheckingAccount()

FixedDepositAccount (Derived from Savings + Checking)
└── calculateFixedInterest()

---

## 🚀 How to Run
1. Clone the repository:
   ```bash
   git clone https://github.com/Rajdeep5270/the-cpp-diaries.git
2. Navigate to the project folder.
3. Compile the code:
   - g++ bankingSystem.cpp -o bankingSystem
4. Run the program:
   - ./bankingSystem

---

## 🏁 Future Improvements

- Add file handling to save and load account details.
- Implement admin panel for multiple users.
- Add graphical UI instead of console-based menus.

## 🙌 Author

👨‍💻 Rajdeep Singh  
Web Developer | Creative Coder | Animation Enthusiast  

🌐 Portfolio: [rajdeepsingh.vercel.app](https://rajdeepsingh.vercel.app)  
🔗 GitHub: [github.com/Rajdeep5270](https://github.com/Rajdeep5270)  
💼 LinkedIn: [linkedin.com/in/rajdeep-singh](https://www.linkedin.com/in/rajdeep-singh/)  

## 💙 Thank You!
If you liked this project, don’t forget to ⭐ the repo.  
Your support motivates me to build and share more awesome C++ projects! 🚀  
