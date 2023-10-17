# CPPDS_Constructor_overloading
# C++ Constructor Overloading

This repository contains examples and explanations of constructor overloading in C++. Constructor overloading allows you to define multiple constructors for a class with different sets of parameters. This README provides an overview of how to work with constructor overloading in C++.

## Table of Contents
- [Constructor Overloading](#constructor-overloading)
  - [Definition](#definition)
  - [Overloaded Constructors](#overloaded-constructors)
  - [Choosing the Appropriate Constructor](#choosing-the-appropriate-constructor)
- [Algorithm](#algorithm)
- [Output](#output)

## Constructor Overloading

### Definition

Constructor overloading is a feature in C++ that allows you to define multiple constructors for a class, each with a different set of parameters. This enables you to create objects of the class with varying initializations.

### Overloaded Constructors

To overload constructors, define multiple constructors within the same class, each with a unique parameter list:

```cpp
class MyClass {
public:
    MyClass() {
        // Default constructor
    }
    
    MyClass(int value) {
        // Parameterized constructor with one integer argument
    }
    
    MyClass(int a, int b) {
        // Parameterized constructor with two integer arguments
    }
};
```

### Choosing the Appropriate Constructor

When you create an object of the class, the appropriate constructor is automatically selected based on the number and types of arguments provided:

```cpp
MyClass obj1;         // Calls the default constructor
MyClass obj2(42);     // Calls the constructor with one integer argument
MyClass obj3(1, 2);   // Calls the constructor with two integer arguments
```
## **ALGORITHM**

- *Constructor Overloading Algorithm*:

1.Start

2.Define a class with multiple constructor declarations, each with a different parameter list. These constructors may have different numbers or types of parameters.

3.Inside each constructor, initialize the object's member variables using the provided arguments.

4.Optionally, perform any necessary initialization or validation logic inside the constructors.

5.Create objects of the class by specifying different sets of arguments when invoking the constructors.

6.When creating an object, the compiler will determine which constructor to call based on the number and types of arguments provided.

7.Use the objects to access member variables and member functions as needed.

8.End

## **OUTPUT**


![exp13_1](https://github.com/Purvansha022609/Constructors-Overloading/assets/139473344/e8df6652-a2e9-4564-91fd-0d7832690d8d)
