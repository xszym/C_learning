#include <stdio.h>

int min(int a, int b){ return a < b ? a : b;}

int max(int a, int b){ return a > b ? a : b;}

int f(int *arr, int n, int(*f)(int, int)){
  int temp = arr[0];
  for(int i = 1; i < n; ++i)
    temp = f(arr[i], temp);
  return temp;
}

int main(){
  int arr[] = {1, 2, 4, 14, -13, 141, 4, -1, 0, -5};

  printf("%d\n", f(arr, 10, min));
  printf("%d\n", f(arr, 10, max));

  return 0;
}
