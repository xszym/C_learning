#include <stdio.h>
#include <stdlib.h>

void f1(int **arr, int n, int m){
  for(int i = 0; i < n; i++)
    for(int j = 0; j < n; ++j)
    arr[i][j] = j * i;
}

void f1(int **arr, int n, int m){
  for(int i = 0; i < n; i++)
    for(int j = 0; j < n; ++j)
      printf("%d\n", arr[i][j]);

  printf("\n");
}


int main(){
  int n, m;
  scanf("%d%d", &n, &m);
  int **arr = malloc(sizeof(int *) * n);

  for(int i = 0; i < n; ++i)
    arr[i]= malloc(sizeof(int) * m);

  f1(arr, n, m);
  f1(arr, n, m);

  for(int i = 0; i < n; ++i){
    free(arr[i]);
  free(arr);
  }

  return 0;
}
