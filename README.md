# Matrix-project
This project includes matrix and vector operations
# Matrix & Vector Library (C++)

A simple C++ project for basic matrix and vector operations, written for educational purposes.

---

## Files

- matrix_library.h  
  Function declarations and constants

- matrix_library.cpp  
  Implementation of matrix and vector operations

- demonstration.cpp  
  Console-based demo program (contains `main`)

---

## Features

### Matrix
- Addition & subtraction
- Multiplication
- Scalar multiplication
- Transpose
- Determinant
- Inverse (Gauss–Jordan)
- Max size: 10 × 10

### Vector (3D)
- Addition & subtraction
- Scalar multiplication
- Dot product
- Cross product
- Length
- Normalization

---

## How to Compile
```bash
g++ matrix_library.cpp demonstration.cpp -o matrix_app
How to Run
./matrix_app
Notes
Uses static arrays (no STL)
Vector size is fixed to 3
Designed for learning and university assignments
