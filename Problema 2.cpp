#include <iostream>
using namespace std;

int main(){
  int filA = 2, colA = 3, filB = 3, colB = 2;
  int A[filA][colA];
  int B[filB][colB];
 
  for(int i = 0; i < filA; i++){
    for(int j = 0; j < colA; j++){
      A[i][j] = i * filA + j;
    }
  }
  for(int i = 0; i < filB; i++){
    for(int j = 0; j < colB; j++){
      B[i][j] = i * filB + j;
    }
  }
 
  int C[filA][colB] = {0};
 
  for(int i = 0; i < filA; i++){
    for(int j = 0; j < colB; j++){
      for(int k = 0; k < colA; k++){
        C[i][j] += A[i][k] * B[k][j];
      }
    }
  }
 
  for(int i = 0; i < filA; i++){
    for(int j = 0; j < colB; j++){
      cout << C[i][j] << " ";
    }
    cout << endl;
  }
 
  return 0;
}
