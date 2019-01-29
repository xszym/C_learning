#include <stdio.h>

typedef enum {ADDITION, SUBTRACTION, MULTIPLICATION, DIVISION, UNKNOWN} Operations;

Operations f(int a, int b, int result){
  if(a+b==result) return ADDITION;
  else if(a-b==result) return SUBTRACTION;
  else if(a*b==result) return MULTIPLICATION;
  else if(a/b==result) return DIVISION;
  else return UNKNOWN;
}

int main(){
  printf("%d\n", f(2, 2, 1));

  return 0;
}
