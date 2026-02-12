#include <iostream>
#include "matrix_library.h"
using namespace std;
int main(){
    const  int max_rows = 10;
int rowsA , rowsB ;
   int A[max_rows][max_rows];
   int B[max_rows][max_rows];
   int C[max_rows][max_rows];
   int W[max_rows][max_rows];
    double inv[max_size][max_size] ;
   int T[max_rows][max_rows];
   int Q[max_rows][max_rows] ;
   int scaled[max_size][max_size];
   int n ;
   int X ;
   int colsA  ;
   int colsB  ;
   cout << " enter rows and cols of matrix A : \n";
   cin >> rowsA >> colsA ;
   cout<< " enter elements of matrix A : \n ";
   for( int i=0 ; i< rowsA ; i++){
    for(int j=0 ; j< colsA ; j++){
        cin>>A[i][j];
    }
   }
   cout << " enter rows and cols of matrix B : \n";
   cin >> rowsB >> colsB ;
        cout << "enter elements of matrix B : \n";
        for( int i=0 ; i< rowsB ; i++){
    for(int j=0 ; j< colsB ; j++){
        cin>>B[i][j];
    }
   }
        //jame
        if(rowsA == rowsB && colsA ==colsB){
        summatrix( A , B , C ,rowsA ,colsA);
        cout <<" sum matrix \n";
    for( int i=0 ; i< rowsA ; i++){
    for(int j=0 ; j< colsA ; j++){
            cout <<C[i][j]<<" ";
    }
    cout <<"\n";
    }
    }else{
    cout<<"cols and rows of matrix are not equal \n" ;
    }

        //menha
            if( rowsA == rowsB && colsA ==colsB ){
        submatrix( A , B , W , rowsA , colsA );
        cout << "sub matrix \n" ;
        for( int i=0 ; i< rowsA ; i++){
    for(int j=0 ; j< colsA ; j++){
            cout <<W[i][j]<<" ";
    }
    cout <<"\n";
        }
    }else{
        cout<< "cols and rows of matrix are not equal \n";
        }
        //determinan
        if(rowsA <= 0 || colsA <= 0 || rowsA>max_size || colsA > max_size){
        return 0 ;
        }
         if(rowsA == colsA ){
                double det= determinan(A,rowsA);
           cout<<" the determinan A is : "<<det<<"\n" ;
        }else{
        cout << " determinan is wrong \n " ;
        }
        //makoos
          if ( rowsA ==colsA ){
    if ( inversematrix(A,inv,rowsA)){
              cout << " inverse matrix : " <<"\n" ;
             for( int i=0 ; i< rowsA ; i++){
    for(int j=0 ; j< rowsA ; j++){
            cout << inv[i][j] << " " ;
    }
    cout << "\n " ;
             }
         }else{
         cout << "matrix has no inverse \n " ;
         }
            }else {
            cout << " matrix is not square " << "\n" ;
            }
        // zarb
        if (matrixmultiplier(A,B,C,rowsA,colsA,rowsB,colsB)){
        cout << " matrix multiply A in B :\n";
        for( int i=0 ; i< rowsA ; i++){
    for(int j=0 ; j< colsB ; j++){
    cout << C[i][j] <<" ";
    }
    cout <<"\n";
        }
        }
        //scaler
        cout << " enter scaler number : "<<"\n" ;
        int K ;
        cin >> K ;
        Scalermultiplier(A , Q , scaled , rowsA , colsA , K);
        cout<<" Scaler multiplication of matrix A : \n" ;
      for( int i=0 ; i< rowsA ; i++){
    for(int j=0 ; j< colsA ; j++){
    cout << Q[i][j] <<" ";
    }
    cout <<"\n";
      }
        //tranhade
        transposematrix(A,T,rowsA,colsA);
        cout<<" transpose matrix A : \n" ;
        for( int i=0 ; i< colsA ; i++){
    for(int j=0 ; j< rowsA ; j++){
    cout << T[i][j] <<" ";;
    }
    cout <<"\n";
        }

        //vector
         double vectorA[SIZE] , vectorB[SIZE] , result[SIZE] ;

         cout << " enter the elements of vector A : \n " ;
         for ( int i=0 ; i < SIZE ; i++){
            cin >> vectorA[i] ;
         }
         cout << " enter the elements of vector B : \n " ;
         for ( int i=0 ; i < SIZE ; i++){
            cin >> vectorB[i] ;
         }
         //sum
         addVector( vectorA , vectorB , result );
         cout << " sum of two vector is : \n " ;
         for ( int i=0 ; i < SIZE ; i++){
         cout << result[i] << "" <<"\n" ;
         }
         //sub
         subVector( vectorA , vectorB , result );
         cout << " sub of two vector is : \n " ;
         for ( int i=0 ; i < SIZE ; i++){
         cout << result[i] << "" <<"\n" ;
         }
         //scaler
         double P ;
         cout << " enter the scaler num : \n ";
         cin >> P ;
        Scalermultiplier( vectorA , result , P );
         cout << "Scaler multiplication : \n ";
         for ( int i=0 ; i < SIZE ; i++){
         cout << result[i] << "" <<"\n" ;
         }
         //zarb dakheli
         double dotpro = dotproduct( vectorA , vectorB );
         cout << " the dotproduct is : " << dotpro <<"\n" ;
         //zarb khareji
         crossproduct( vectorA , vectorB , result );
         cout << " the crossproduct is : \n " ;
         for ( int i=0 ; i < SIZE ; i++){
         cout << result[i] << "" <<"\n" ;
         }
         //andaze
         double len = vectorlength(vectorA);
         cout << "length of the vector A is : "<< len <<"\n" ;
         //normal sazy
         normalizevector(vectorA,result);
         cout << " normalize vector A : " ;
          for ( int i=0 ; i < SIZE ; i++){
                cout << result[i] << " " ;
}
cout << "\n " ;
return 0 ;
}
