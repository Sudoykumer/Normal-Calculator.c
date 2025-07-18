

---

````markdown
# Simple Calculator in C

This is a simple calculator program written in the C programming language. It allows users to perform basic arithmetic operations like addition, subtraction, multiplication, and division between two numbers.

---

## 📋 Features

- Addition (`+`)
- Subtraction (`-`)
- Multiplication (`*`)
- Division (`/`) with zero-division protection
- Clean and easy-to-understand user interface in the terminal

---

## 🧠 How It Works

1. The user is asked to input an arithmetic operator (`+`, `-`, `*`, `/`).
2. Then the user inputs two numbers (operands).
3. The program performs the selected operation and shows the result.
4. If the user inputs an invalid operator or tries to divide by zero, the program displays an error message.

---

## ✅ Example

```txt
Enter an operator (+, -, *, /): +
Enter two operands: 12.5 7.3
12.5 + 7.3 = 19.8
````

---

## ⚠️ Error Handling

* If an invalid operator is entered:

  ```
  Error! Operator is not correct.
  ```

* If division by zero is attempted:

  ```
  Error! Division by zero.
  ```

---

## 🛠️ How to Run

### 🖥️ Using a Terminal (Linux/Mac):

```bash
gcc calculator.c -o calculator
./calculator
```

### 💻 On Windows (Using GCC/MinGW):

```bash
gcc calculator.c -o calculator.exe
calculator.exe
```

---

## 📁 File Structure

```
.
├── calculator.c     # Main source code
└── README.md        # Project documentation
```

---

## 🌟 Why This Project?

This project is perfect for beginners who are learning C programming. It demonstrates:

* Use of `switch` statements
* User input handling
* Basic control flow
* Error checking

---

## 🧑‍💻 Author

Created with ❤️ by \[SUDOY KUMER GHOSH]

---

## 📜 License

This project is open-source and free to use under the [MIT License](https://choosealicense.com/licenses/mit/).
