#ifndef MATRIX_LIBRARY.H
#define MATRIX_LIBRARY.H

#include <cmath>
const  int max_size = 10;
void summatrix( int A[max_size][max_size] ,int B[max_size][max_size] ,int C[max_size][max_size] ,int rows ,int cols );
void submatrix(int A[max_size][max_size] ,int B[max_size][max_size],int W[max_size][max_size] , int rows ,int cols);
double determinan ( int A[max_size][max_size] , int n );
bool inversematrix(int A[max_size][max_size] , double inv[max_size][max_size] , int n );
bool matrixmultiplier(int A[max_size][max_size] , int B[max_size][max_size] ,int C[max_size][max_size] ,int rowsA , int colsA
 ,int rowsB , int colsB);
void Scalermultiplier(int A[max_size][max_size] ,int Q[max_size][max_size], int scaled[max_size][max_size],int rows, int cols ,
int K);
void transposematrix(int A[max_size][max_size] , int T[max_size][max_size] ,int rows , int cols);


const int SIZE = 3;
void addVector(double a[SIZE] , double b[SIZE] , double result[SIZE] );
void subVector( double a[SIZE] , double b[SIZE] , double result[SIZE] );
void Scalermultiplier( double a[SIZE] , double result[SIZE] , double P );
double dotproduct(double a[SIZE] , double b[SIZE]);
void crossproduct(double a[SIZE] , double b[SIZE] , double result[SIZE]);
double vectorlength(double a[SIZE]);
void normalizevector(double a[SIZE] ,double result[SIZE]);
#endif//MATRIX_LIBRARY.H

