#include <math.h>
#include <stdio.h>

/*
Liczenie pierwiastow funkcji kwadratowej xD
*/

int main(){
  float a, b, c;

  printf("Podaj wspolczynniki a, b, c dla ax^2+bx+c\n");
  scanf("%f %f %f", &a, &b, &c);
  float delta = pow(b, 2) - 4 * a * c;
  float x1 = (b - sqrt(delta)) / 2 * a;
  float x2 = (b + sqrt(delta)) / 2 * a;

  if(delta < 0){
    printf("Delta mniejsza od 0. Brak mniejsc zerowych");
  }else {
  printf("x1 = %f, x2 = %f\n", x1, x2);
  }

  return 0;
}
