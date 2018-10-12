#include <stdio.h>

/*
"1. Napisz program w języku C, który sprawdzi parzystość liczby wczytanej od
użytkownika. Program powinien wyświetić 1, jeśli liczba jest parzysta lub
0 w przeciwnym wypadku.
*/

int main(){

  int a;

  scanf("%d", &a);
  a%2 ? printf("0 \n") : printf("1 \n");

  return 0;
}
