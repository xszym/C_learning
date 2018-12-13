#include <stdio.h>
#include <stdbool.h>

typedef unsigned int uint;

int *f(int arr[], uint n, bool *b){
  *b = true;
  for(uint i = 0; i < n; i++)
    for(uint j = 0; j < i; j++)
      if(arr[i] == arr[j]){
        *b = false;
        return &arr[j];
      }
  return &arr[0];
}

int main(){

  int arr[] = {1, 2, 3, 4, 5, 5};

  bool b;

  printf("%p,  ", f(arr, 6, &b));
  printf("%d", b);

  return 0;
}
