#include <stdio.h>

/*
Pole trapezu, zmiennoprzecinkowe
*/

int main(){

  double a, b, h;
  double wynik;

  printf("Podaj dolna krawedz postawy: ");
  scanf("%lf", &a);
  printf("Podaj gorna krawedz postawy: ");
  scanf("%lf", &b);
  printf("Podaj wysokosc trapezu: ");
  scanf("%lf", &h);

  wynik = (a+b)*h/2;

  printf("Pole trapezu to %lf\n", wynik);

  return 0;
}
