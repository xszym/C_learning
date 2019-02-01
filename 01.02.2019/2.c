#include <stdio.h>
#include <stdlib.h>

float **f(float *arr, int n, int m){
  //Alokacja 2 wymierowej tablicy
  float **result = malloc(n*sizeof(result));
  for(int i = 0; i < n; i++) result[i] = malloc(m * sizeof(**result));

  for(int i = 0; i < n; ++i)
    for(int j = 0; j < m; ++j)
     if(i == 0 || j ==0 || i == n - 1 || j == m -1) result[i][j] = 0.f;
     else result[i][j] = arr[i *m + j];
  return result;
}

int main(){
  int n = 3, m = 5;
  float arr[15] = {1.f, 2.f, 5.f, 1.f, 2.f, 5.f,1.f, 2.f, 5.f,1.f, 2.f, 5.f,1.f, 2.f, 5.f};
  float **result = f(arr, 3, 5);

  for(int i = 0; i < n; ++i){
    for(int j = 0; j < m; ++j)
      printf("%f ", result[i][j]);
    printf("\n");
  }

  //ZWOLNIENIE pamięci tablicy 2 wymierowej.
  for(int i = 0; i < n; ++i) free(result[i]);
  free(result);
  return 0;
}
