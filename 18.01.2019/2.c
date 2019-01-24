#include <stdio.h>

int main(){
  char buffer[] = "3*x - 5";
  int a, b;
  float x;
  scanf("%f", &x);
  sscanf(buffer, "%d*x - %d", &a, &b);
  printf("%f\n", a * x - b);
  return 0;
}
