#include <stdlib.h>
#include <string.h>
#include <stdio.h>

void f(int *matrix, int N){
  for(int i = 0; i < N; ++i) for(int j = 0; j < N; ++j) matrix[i * N + j] = (i + 1) * (j + 1);
}

//Pliki tekstowe i binarne przejrzeć wszystko
