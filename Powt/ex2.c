#include <stdio.h>
#include <stdbool.h>
#include <math.h>

bool f(int n, int arr[n]){
  for(int i = 0; i < ceil(n/2); i++){
    if(arr[i] != arr[n - 1 - i])
      return false;
  }
  return true;
}

int main(){

  int n;

  scanf("%d", &n);

  int arr[n];

  for(int i = 0; i < n; i++)
    scanf("%d", &arr[i]);

  printf("%d", f(n, arr));

  return 0;
}
