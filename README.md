```markdown
# Course Bank Project - C++

![C++](https://img.shields.io/badge/C++-17-blue.svg)
![License](https://img.shields.io/badge/License-MIT-green.svg)

A **banking simulation project** developed in **C++** as part of an Object-Oriented Programming course. The goal is to practice core concepts such as classes, inheritance, encapsulation, polymorphism, file handling, and data structures.

---

## 📋 Features

- **Client registration** (individual and corporate)
- **Account creation** (checking and savings)
- **Banking operations**:
  - Deposit
  - Withdrawal
  - Transfer between accounts
  - Balance inquiry and transaction history
- **Data persistence** using text files
- **Input validation** and exception handling
- **Interactive console menu**

---

## 🛠️ Technologies Used

- **Language**: C++17
- **Compiler**: g++ (or any C++17-compliant compiler)
- **Standard Libraries**:
  - `<iostream>`
  - `<fstream>`
  - `<vector>`
  - `<string>`
  - `<iomanip>`

---

## 🚀 How to Compile and Run

### Prerequisites
- C++ compiler with C++17 support (e.g., `g++`, `clang++`)
- OS: Windows, Linux, or macOS

### Steps

1. Clone the repository:
```bash
git clone https://github.com/VictorAugustoCorrea/course-bank-project-cpp.git
cd course-bank-project-cpp
```

2. Compile the project:
```bash
g++ -std=c++17 -o bank main.cpp Conta.cpp Cliente.cpp Banco.cpp -Wall
```

3. Run the program:
```bash
./bank        # Linux/macOS
# or
bank.exe      # Windows
```

## 🎯 Example Usage

```text
=== BANKING SYSTEM ===
1. Register Client
2. Create Account
3. Deposit
4. Withdraw
5. Transfer
6. Check Balance
7. View Statement
8. Exit
Choose an option: 
```
