#include <stdio.h>

typedef unsigned int uint;

uint f(uint n){
if(n == 0 || n == 1) return 1;
return f(n - 1) + 2 * f(n - 2) + 3;
}

uint f_tail_rec(uint n, uint a, uint b){

  if(n < 2) return b;
  else {
    f_tail_rec(n - 1, b, b + 2 * a + 3);
  }


}

int main(){

  printf("%u\n", f_tail_rec(10, 1, 1));

  return 0;
}
