========================================
Matrix and Vector Library (C++)
========================================

Student Information
-------------------
Name        : Fatemeh Babaeeyan
Student ID  : 1404010121022
Professor   : Dr.Tabatabaei

Project Description
-------------------
This project is a C++ implementation of a basic Matrix and Vector
Library. The program provides fundamental operations on matrices
and vectors, including arithmetic operations, determinant calculation,
matrix inversion, and vector algebra.

The project is designed for educational purposes to demonstrate
the implementation of linear algebra concepts using procedural
programming in C++ without external libraries.


Implemented Features
--------------------

Matrix Operations:
- Matrix addition
- Matrix subtraction
- Matrix multiplication
- Scalar multiplication of a matrix
- Matrix transpose
- Determinant calculation (recursive method)
- Matrix inverse using Gauss-Jordan elimination

Vector Operations (3D vectors):
- Vector addition
- Vector subtraction
- Scalar multiplication
- Dot product
- Cross product
- Vector length (magnitude)
- Vector normalization


Implementation Details
----------------------
- Matrices are implemented using static 2D arrays.
- All matrix operations are implemented using functions.
- Determinant calculation is implemented recursively using
  minor expansion.
- Matrix inversion is implemented using the Gauss-Jordan method.
- Vector operations are implemented for fixed-size 3D vectors.
- No external libraries are used except standard C++ libraries
  such as <iostream> and <cmath>.


Program Limitations
-------------------
- Maximum matrix size is 10 × 10.
- Only integer matrices are supported for most matrix operations.
- Matrix inversion is only possible for square matrices with
  non-zero determinant.
- Vector operations are limited to 3-dimensional vectors.
- No dynamic memory allocation is used.
- No error recovery for invalid numeric input.


How to Compile and Run
----------------------
1. Open a terminal or command prompt.
2. Navigate to the project directory.
3. Compile the program using a C++ compiler (e.g. g++):

   g++ matrix_lib.cpp -o matrix_lib

4. Run the executable:

   ./matrix_lib

(On Windows, use matrix_lib.exe)


Program Usage
-------------
- The program first asks the user to enter the dimensions and elements
  of two matrices.
- It then performs supported matrix operations and displays results.
- After matrix operations, the program asks for vector inputs and
  performs vector operations.
- All results are printed directly to the console.


Design Choices
--------------
- Fixed-size arrays are used for simplicity and clarity.
- Recursive determinant calculation was chosen for conceptual clarity.
- Gauss-Jordan elimination was used for matrix inversion due to its
  straightforward implementation.
- Vector size is fixed to 3 to support dot and cross products.


Conclusion
----------
This project demonstrates the practical implementation of matrix
and vector operations in C++. It helps reinforce understanding of
linear algebra concepts and basic algorithmic problem solving.

========================================
