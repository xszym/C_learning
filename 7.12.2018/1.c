#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

int main(){
  int n = 32;
  char *arr = malloc(n);

  for(int i = 0; i < n / sizeof(int); i++)
    *((int *)arr + i) = INT_MAX - 1;

    printf("\n");

  for(int i = 0; i < n; i++)
    printf("%d ", *((int *)arr + i));


  return 0;
}
