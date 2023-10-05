# C++ - Module 07: C++ Templates

![C++ Logo](cpp_logo.png)

## Table of Contents

1. [Introduction](#introduction)
2. [Exercise 00: Start with a Few Functions](#exercise-00-start-with-a-few-functions)
3. [Exercise 01: Iter](#exercise-01-iter)
4. [Exercise 02: Array](#exercise-02-array)
6. [License](#license)

## Introduction

Welcome to Module 07 of the C++ course, where we delve into the powerful world of C++ templates. Templates are a cornerstone of modern C++ programming, allowing for the creation of flexible, reusable code that can work with various data types. In this module, we'll explore the fundamentals of creating and utilizing template functions and classes.

## Why is it Relevant?

Understanding and mastering templates is essential for any proficient C++ developer. They enable us to write code that adapts to different data types, enhancing code flexibility and reusability. This module serves as a foundational step in becoming a proficient C++ programmer.

## Key Concepts

Before we dive into the exercises, let's familiarize ourselves with some key concepts:

- **Templates**: Templates in C++ allow for the creation of generic code that can work with different data types.
- **Function Templates**: These allow us to define functions with generic types, enabling them to work with various data types.
- **Class Templates**: Similarly, class templates enable us to create generic classes that can be customized for different data types.

# Exercise 00: Start with a Few Functions

## Introduction

In this exercise, we delve into the essentials of function templates. We implement three critical functions:

- `swap`: Swaps the values of two arguments.
- `min`: Returns the smallest of two values.
- `max`: Returns the greatest of two values.

These templates are designed to work with any type of argument that supports comparison operators.

## Why is it Relevant?

Mastery of function templates is a cornerstone of modern C++ development. It allows us to write versatile and reusable code that adapts to different data types. This exercise provides hands-on experience in creating generic functions.

## Key Concepts

- **Function Templates**: Templates that enable the definition of functions with generic types, making them adaptable to various data types.
- **Comparison Operators**: Understanding and utilizing comparison operators (`<`, `>`, `==`, etc.) is essential for working with templates.

## How to Run the Program

Follow these steps to compile and execute the code for Exercise 00:

1. Navigate to the `ex00` directory using the command line.
2. Use the provided `Makefile` to compile the code. Execute the following command:
   ```bash  ```
    ```make run ```

# Exercise 01: Iter

## Introduction

In this exercise, we explore the versatility of function templates with a focus on processing arrays. We'll implement a function template named `iter` that takes an array, its length, and a function, applying the function to each element.

## Why is it Relevant?

Understanding and effectively using function templates for array processing is crucial in modern C++ development. It allows for the creation of generic algorithms that can work with different data types.

## Key Concepts

- **Function Templates**: Templates that enable the definition of functions with generic types, making them adaptable to various data types.
- **Array Processing**: The ability to apply a function to each element of an array is fundamental in many programming scenarios.

## How to Run the Program

Follow these steps to compile and execute the code for Exercise 01:

1. Navigate to the `ex01` directory using the command line.
2. Use the provided `Makefile` to compile the code. Execute the following command:
   ```bash  ```
    ```make run ```

# Exercise 02: Array

## Introduction

In this exercise, we focus on creating a versatile class template called `Array`. This class can hold elements of type `T` and implements essential behaviors including construction, copy, assignment, and more.

## Why is it Relevant?

Understanding and implementing class templates is a crucial skill in C++ development. It allows for the creation of flexible and reusable data structures that can adapt to different data types.

## Key Concepts

- **Class Templates**: Templates that enable the creation of generic classes, allowing them to work with various data types.
- **Memory Allocation**: Understanding how memory is allocated and managed is critical for creating robust data structures.

## How to Run the Program

Follow these steps to compile and execute the code for Exercise 02:

1. Navigate to the `ex02` directory using the command line.
2. Use the provided `Makefile` to compile the code. Execute the following command:
   ```bash  ```
    ```make run ```

   
## License

This project is licensed under the MIT License - see the [LICENSE.md](LICENSE.md) file for details.