#include <iostream>
using namespace std;

int main(){
  int n = 4;
  int bs = 2;
  int A[n][n];
  int B[n][n];
 
  for(int i = 0; i < n; i++){
    for(int j = 0; j < n; j++){
      A[i][j] = i * n + j;
    }
  }
  for(int i = 0; i < n; i++){
    for(int j = 0; j < n; j++){
      B[i][j] = i * n + j;
    }
  }
 
  int C[n][n] = {0};
 
  for(int bi = 0; bi < n; bi += bs){
    for(int bj = 0; bj < n; bj += bs){
      for(int bk = 0; bk < n; bk += bs){
        for(int i = bi; i < bi + bs; i++){
          for(int j = bj; j < bj + bs; j++){
            for(int k = bk; k < bk + bs; k++){
              C[i][j] += A[i][k] * B[k][j];
            }
          }
        }
      }
    }
  }
 
  for(int i = 0; i < n; i++){
    for(int j = 0; j < n; j++){
      cout << C[i][j] << " ";
    }
    cout << endl;
  }
 
  return 0;
}
