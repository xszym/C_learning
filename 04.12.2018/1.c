#include <stdio.h>
#include <math.h>
#include <stdlib.h>

void f1(int n, float *arr){
  for(int i = 0; i < n; i++)
    arr[i] = 1.f / (i + 1.f);
}

void f2(int n, float *arr){
  float a = 0;
  for(int i = 1; i <= n; i++)
    printf("%f, ", a = pow((-1), i) * arr[i - 1] + a);
}

int main(){
  int n;
  scanf("%d", &n);
  float *ptr = calloc(n, sizeof(float));
  f1(n, ptr);
  f2(n, ptr);
  free(ptr);

  return 0;
}
