# CPP Pool - Day 05: 42 School

## Overview
Day 05 focuses on understanding and implementing operator overloading in C++. It also introduces handling exceptions using `try` and `catch` blocks for robust error management in C++ programs.

## Objectives
- Learn the syntax and semantics of operator overloading.
- Implement custom operators for user-defined classes.
- Understand the limitations and best practices of operator overloading.
- Gain a deeper understanding of exception handling using `try`, `catch`, and `throw`.

## Introduction to Exception Handling
Exception handling in C++ allows you to manage runtime errors gracefully, preventing crashes and ensuring program stability. 

- Use a `try` block to enclose code that might throw an exception.
- Use one or more `catch` blocks to handle specific exceptions.
- Use the `throw` keyword to signal an exception when an error occurs.

### Example:
```cpp
#include <iostream>
#include <stdexcept>

int main() {
    try {
        int numerator = 10, denominator = 0;
        if (denominator == 0)
            throw std::runtime_error("Division by zero is not allowed.");
        std::cout << "Result: " << numerator / denominator << std::endl;
    } catch (const std::exception &e) {
        std::cerr << "Error: " << e.what() << std::endl;
    }
    return 0;
}
```
This code demonstrates the use of `try` and `catch` to handle a division-by-zero error gracefully.



## Additional Resources
- For a detailed review, check out the Course i make in Notion  [C++ Resume Course](https://www.notion.so/Cpp-d50387d69585455dac991d8611376536?pvs=4).

