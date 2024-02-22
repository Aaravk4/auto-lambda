
# Simple C++ Code Demonstrating the Use of Auto Keyword

## Introduction
This code serves as a simple example showcasing the usage of the "auto" keyword in the C++ programming language. The "auto" keyword allows for flexible variable declaration by enabling the compiler to automatically determine the data type of the variable based on the assigned value.

## Code Structure
- **func**: This function takes three auto input variables. It performs condition checks and prints corresponding messages based on the evaluation result.
- **func1**: This function takes an auto input variable and utilizes a lambda function. The lambda function performs addition of two integers and returns the result. Subsequently, the function checks the result and prints "Case A" if the result is greater than 10, otherwise it prints "Case B".
- **func2**: The main function of the program, calling the func function with initialized parameters.

## How to Run
1. Ensure you have a C++ compiler installed.
2. Copy the source code into a new file (e.g., `main.cpp`).
3. Compile and run the program.

```bash
g++ main.cpp -o main
./main
