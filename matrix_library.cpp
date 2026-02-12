#include <iostream>
#include "matrix_library.h"
using namespace std;
void summatrix( int A[max_size][max_size] ,int B[max_size][max_size] ,int C[max_size][max_size] ,int rows ,int cols ){
 for(int i=0 ; i<rows ; i++){
    for(int j=0 ; j<cols ; j++){
        C[i][j] = A[i][j] + B[i][j];
    }
 }
}
void submatrix(int A[max_size][max_size] ,int B[max_size][max_size],int W[max_size][max_size] , int rows ,int cols){
for(int i=0 ; i<rows ; i++){
    for(int j=0 ; j<cols ; j++){
        W[i][j] = A [i][j] - B[i][j];
    }
  }
}
double determinan ( int A[max_size][max_size] , int n ){
if(n==1){
    return A[0][0];
}
if(n==2){
    return (double)A[0][0] * A[1][1] - (double)A[0][1] * A[1][0];
}
double det=0;
int sub[max_size][max_size];
int sign = 1 ;
//satre aval
for(int cols = 0 ; cols <n ; cols++){
    int subi = 0 ;
    for( int i=1 ; i <n ; i++){
        int subj = 0 ;
        for( int j=0 ; j <n ; j++){
            if (j == cols) continue ;
            sub[subi][subj] = A[i][j];
            subj++ ;
        }
        subi ++ ;
    }
        det += sign *(double)A[0][cols] * determinan(sub , n-1);
        sign = -sign ;
    }
    return det;
}
bool inversematrix(int A[max_size][max_size] , double inv[max_size][max_size] , int n ){
    double M[max_size][max_size] ;
for( int i = 0 ; i < n ; i++){
    for ( int j = 0 ; j < n ; j++){
        M[i][j] = A[i][j] ;
        if(i == j )
            inv[i][j] = 1 ;
       else
        inv[i][j] = 0 ;

        }
    }
    for ( int i = 0 ; i < n ; i++){
        if(M[i][i] == 0 )
            return false ;

        double pivot = M[i][i] ;
  for ( int j = 0 ; j <n ; j++){
    M[i][j] /= pivot ;
    inv[i][j] /= pivot ;
  }
  for( int K = 0 ; K < n ; K++){
    if ( K == i) continue ;
    double factor = M[K][i] ;
    for ( int j = 0 ; j < n ; j++){
        M[K][j] -= factor * M[i][j] ;
        inv[K][j] -= factor * inv[i][j] ;
    }
  }
}
return true ;
}
bool matrixmultiplier(int A[max_size][max_size] , int B[max_size][max_size] ,int C[max_size][max_size] ,int rowsA , int colsA
 ,int rowsB , int colsB){
if (colsA !=rowsB){
        return false ;
}
        for( int i=0 ; i<rowsA ; i++){
for(int j =0 ; j<colsB ; j++){
   C[i][j]=0;
    for(int K=0 ; K<colsA ; K++){
        C[i][j]+= A[i][K] * B[K][j];
    }
  }
 }
 return true ;
}
void Scalermultiplier(int A[max_size][max_size] ,int Q[max_size][max_size], int scaled[max_size][max_size],int rows, int cols ,
int K){
 for( int i=0 ; i<rows ; i++){
    for( int j=0 ; j<cols ; j++){
        Q[i][j] = K * (double)A [i][j];
    }
 }
}
void transposematrix(int A[max_size][max_size] , int T[max_size][max_size] ,int rows , int cols){
for(int i=0 ; i<rows ; i++){
    for( int j=0 ; j<cols ; j++){
        T[j][i] = A[i][j];
    }
}
}
    //vector

    void addVector(double a[SIZE] , double b[SIZE] , double result[SIZE] ){
    for ( int i=0 ; i < SIZE  ; i++)
        result[i] = a[i] + b[i] ;
    }
    void subVector( double a[SIZE] , double b[SIZE] , double result[SIZE] ){
    for ( int i=0 ; i < SIZE  ; i++)
        result[i] = a[i] - b[i] ;
    }
    void Scalermultiplier( double a[SIZE] , double result[SIZE] , double P ){
    for ( int i=0 ; i < SIZE  ; i++)
    result[i] = a[i] * P  ;
}
   double dotproduct(double a[SIZE] , double b[SIZE]){
    double result = 0 ;
   for ( int i=0 ; i < SIZE  ; i++){
    result += a[i] * b[i] ;
}
return result ;
}
void crossproduct(double a[SIZE] , double b[SIZE] , double result[SIZE]){
if( SIZE != 3 ){
    cout << " crossproduct is just for 3 dimensional vector " <<" \n " ;
}
  result[0] = a[1] * b[2] - a[2] * b[1] ;
   result[1] = a[2] * b[0] - a[0] * b[2] ;
   result [2] = a[0] * b[1] - a[1] * b[0] ;
   }
double vectorlength(double a[SIZE]){
double sum = 0 ;
for ( int i = 0 ; i < SIZE ; i++){
    sum += a[i] * a[i] ;
}
return sqrt(sum) ;
}
void normalizevector(double a[SIZE] ,double result[SIZE]){
double len = vectorlength(a);
if(len == 0) {
    cout << " vector's length is 0 , not possible \n " ;
}
for(int i = 0 ; i < SIZE ; i++){
    result[i] = a[i] / len ;
}
}
