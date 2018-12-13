#include <stdio.h>

float det(float *arr){
  return
  (arr[0] * arr[4] * arr[8]) + (arr[1] * arr[5] * arr[6]) +
  (arr[2] * arr[3] * arr[7]) - (arr[6] * arr[4] * arr[2]) -
  (arr[0] * arr[5] * arr[7]) - (arr[8] * arr[3] * arr[1]);
}

int main(){
  float arr[] = {5,4,-7,1,3,-1,2,0,-3};
  printf("%f", det(arr));
  return 0;
}

//gra w życie
