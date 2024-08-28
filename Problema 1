#include <iostream>
using namespace std;

#define MAX 1024

int main(){
  double** A = new double*[MAX];
  for(int i = 0; i < MAX; i++){
    A[i] = new double[MAX];
  }
  double x[MAX];
  double y[MAX];
 
  for(int i = 0; i < MAX; i++){
    for(int j = 0; j < MAX; j++){
      A[i][j] = i * MAX + j;
    }
    x[i] = i;
    y[i] = 0;
  }
 
  for(int i = 0; i < MAX; i++){
    for(int j = 0; j < MAX; j++){
      y[i] += A[i][j] * x[j];
    }
  }
 
  for(int i = 0; i < MAX; i++){
    y[i] = 0;
  }
 
  for(int j = 0; j < MAX; j++){
    for(int i = 0; i < MAX; i++){
      y[i] += A[i][j] * x[j];
    }
  }
 
  for(int i = 0; i < MAX; i++){
    delete[] A[i];
  }
  delete[] A;
 
  return 0;
}
