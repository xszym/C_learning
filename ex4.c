#include <stdio.h>

int main(){

  int a, b, c;

  printf("Podaj liczbe do dodania: ");

  scanf("%d", &a);

  b = c = a;

  printf("%d + %d + %d = %d\n", a, b, c, a+b+c);

  return 0;
}
