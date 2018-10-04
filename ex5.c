#include <stdio.h>


int main(){

  int a, b, c;

  printf("Podaj 1 liczbe: ");
  scanf("%d", &a);
  printf("Podaj 2 liczbe: ");
  scanf("%d", &b);
  printf("Podaj 3 liczbe: ");
  scanf("%d", &c);
  double srednia = (double) (a+b+c)/3;
  printf("Srednia to %lf", srednia);

  return 0;
}
