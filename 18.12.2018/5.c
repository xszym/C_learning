#include <stdio.h>
#include <string.h>

void print_arr(int *arr, int n){
  for(int i = 0; i < n; i++) printf("%d", arr[i]); printf("\n");
}

int main(){
  int n = 5;
  int a[] = {0, 0, 0, 0, 0}, b[] = {1, 2, 3, 4, 5};
  print_arr(a, n);
  print_arr(b, n);

  memcpy(a, b, sizeof(*a) * n); //poprawne
  memmove(a, b, sizeof(*a) * n);

  print_arr(a, n);
  print_arr(b, n);
  int tmp1 = a[0], temp2 = a[1];
  memmove(&a[0], &a[2], sizeof(int) * (n - 2));
  a[n - 2] = tmp1; a[n - 1] = temp2;

  print_arr(a, n);
  print_arr(b, n);
  return 0;
}
