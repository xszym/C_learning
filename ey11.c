#include <stdio.h>

/*
1. Napisz program w języku C, który pobierze ze standardowego wejścia
zmiennoprzecinkowe długości podstaw i wysokość trapezu. Następnie program
powinien obliczyć i wyświetlić na standardowym wyjściu pole tej figury
*/
int main(){
  int a, b, h;

  printf("Polotrapezoinator podaj:[Podstawa podstawa wysokosc]\n");
  scanf("%d %d %d", &a, &b, &h);
  printf("Pole to %d\n", (a+b)/2*h);

  return 0;
}
