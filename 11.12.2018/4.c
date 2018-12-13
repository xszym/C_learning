#include <stdio.h>
#include <stdlib.h>

float *mul(float *m1, int r1, int c1, float *m2, int r2, int c2){
  float *result = malloc(r1 * c2 * sizeof(float));
  for(int i = 0; i < r1; i++)
    for(int j = 0; j < c2; j++)
      for(int k = 0; k < c1; ++k)
        result[i * c2 + j] += m1[i * c1 + k] * m2[k * c2 + j];
  return result;
}

void printf_matrix(float *matrix, int n, int m){
  for(int i = 0; i < n; i++){
    for(int j = 0; j < m; j++)
      printf("%.3f ", matrix[i * n + j]);
    printf("\n");
  }
}

int main(){

  float A[] = {1,3,5,7,    2,4,6,8}; //2x4
  float B[] = {1,8,9,   2,7,10,   3,6,11,  4,5,12}; //4x3
  printf_matrix(mul(A, 2, 4, B, 4, 3), 2, 4){

   //mul(A, 2, 4, B, 4, 3 ,2 , 4);
  return 0;
}
