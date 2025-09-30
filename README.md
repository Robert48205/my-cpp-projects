# My C++ Development Portfolio

---

## 🚀 Overview

This repository showcases a collection of my personal projects developed in C++. The focus is on demonstrating proficiency in **Object-Oriented Programming (OOP)**, **Standard Template Library (STL)** usage (specifically `std::vector`), and **fundamental algorithm and logic design**.

**Key Technologies:** C++, OOP (Classes), STL (Vectors), Conditional Logic (`if/else`), Random Number Generation, **File I/O (`fstream`)**.

---

## 💻 Projects List

### 1. Multi-Account Banking System
* **Files:** `BankAccount.cpp` 
* **Description:** A console-based application that models a simple, multi-user banking system. It allows for account creation, viewing details, depositing, and withdrawing funds. Data is stored in memory during the session.
* **Demonstrates:** **Object-Oriented Programming (OOP)** through the use of a custom `class` (`acc`), encapsulation of data (name, balance), and the use of **`std::vector`** to manage a collection of multiple account objects.

### 2. Number Guessing Casino Game
* **Files:** `GuessingGame.cpp` 
* **Description:** A command-line gambling game where the player bets on guessing a randomly generated number. Payouts vary based on guessing the exact number (Jackpot) or being within a close range.
* **Demonstrates:** **Random number generation** (`rand()` and `srand(time(NULL))`), complex **conditional logic** (`if/else`) for game rules, state management (tracking player `balance`), and console interaction.

### 3. Rock-Paper-Scissors Console Game
* **Files:** `RockPaperScissors.cpp` 
* **Description:** An implementation of the classic Rock-Paper-Scissors game against a computer opponent. The game handles player input, random computer choices, and determines the winner based on game logic.
* **Demonstrates:** **Functional design** (using a separate `select` function to map random numbers to choices), **nested conditional logic** for handling game outcomes (win, lose, tie), and continuous game loop (`while(true)`).

### 4. User Authentication and Registration System
* **Files:** `LoginAndRegistration.cpp` 
* **Description:** A robust command-line system that handles user account creation, unique username validation, and secure user login. Account data (username and password) is persisted between sessions using **File Handling** (`lnrf.txt`).
* **Demonstrates:** **File Input/Output (I/O)** using `ifstream` and `ofstream` to read and write data, complex **loop control (`break`, `continue`)** for efficient flow, and **validation logic** for checking account existence and uniqueness.

---

## 💡 Next Steps
I am committed to continuously improving my skills. I plan to add more complex projects utilizing file handling, advanced data structures, and modern C++ features soon.

---
