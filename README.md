Welcome to my first programming project! This is a simple calculator written in C that performs basic arithmetic operations using if and else if statements. It’s a great introduction to learning how to use control flow in C.

Table of Contents
Features
How to Use
Code Structure
Learning Objectives
Future Improvements
License
Features
This calculator supports the following operations:

Addition (+): Adds two numbers.
Subtraction (-): Subtracts one number from another.
Multiplication (*): Multiplies two numbers.
Division (/): Divides one number by another (ensuring no division by zero).
How to Use
Clone the Repository:

bash
Copy code
git clone https://github.com/shacin2007/simple-calculator-c.git
cd simple-calculator-c
Compile the Code: To compile the code, use a C compiler like gcc. Run the following command in your terminal:

bash
Copy code
gcc -o calculator calculator.c
Run the Program: After compiling, you can run the program with the following command:

bash
Copy code
./calculator
Follow the On-Screen Instructions:

Enter two numbers when prompted.
Choose an operation by entering the corresponding character (+, -, *, or /).
The program will display the result of the calculation.
Code Structure
The code is structured in a straightforward manner, making it easy to follow:

The program starts by prompting the user for two numbers.
It then asks the user to select an arithmetic operation.
The chosen operation is processed using if and else if statements.
Finally, the result is displayed, and the program terminates.
Here is a snippet of the main control flow using if and else if:

c
Copy code
if (operation == '+') {
    result = num1 + num2;
} else if (operation == '-') {
    result = num1 - num2;
} else if (operation == '*') {
    result = num1 * num2;
} else if (operation == '/') {
    if (num2 != 0) {
        result = num1 / num2;
    } else {
        printf("Error! Division by zero.\n");
        return;
    }
} else {
    printf("Invalid operation.\n");
}
Learning Objectives
Through this project, I aimed to:

Understand the basics of C programming.
Learn to use if and else if statements for decision-making.
Get comfortable with user input and output in a C program.
Practice compiling and running C programs in a development environment.
Future Improvements
In the future, I plan to:

Add more complex mathematical functions (e.g., power, modulus).
Implement error handling for invalid inputs.
Create a loop that allows multiple calculations without restarting the program.
License
This project is open-source and available under the MIT License. Feel free to fork, modify, and contribute!

