#include <stdio.h>

void f_it(unsigned int n){
  int a, b, c;
  a = b = 1;

  while (n >= 0) {
    printf("%d\n", a);
    a = b;
    c = b + 2 * a + 3;
    b = c;
    n--;
  }
}

int f_rec(unsigned int n){
  return (n == 0) || (n == 1) ? 1 : f_rec(n - 1) + 2 *f_rec(n - 2) + 3;
}

int f_tail_rec(int a, int b, unsigned int n){
  return n == 1 ? b : f_tail_rec(b, b +2 * a + 3, n - 1);
}

int main(){

  //f_it(5);

  return 0;
}
