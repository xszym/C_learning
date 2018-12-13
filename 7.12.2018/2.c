#include <stdio.h>

int add(int a, int b){
  return a + b;
}

int sub(int a, int b){
  return a - b;
}

int main(){
  int (*ptr_f) (int a, int b);
  
  ptr_f = add;
  printf("%d, %d\n", add(1, 4), ptr_f(1, 4));
  ptr_f = sub;
  printf("%d, %d\n", sub(1, 4), ptr_f(1, 4));

  return 0;
}
