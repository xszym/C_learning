#include <stdio.h>

/*
sprawdzi parzystość liczby wczytanej od użytkownika. Program powinien wyświetlić
'Parzysta', jeśli liczba jest parzysta, a w przeciwnym wypadku program
nie powinien wyświetlać nic.
*/

int main(){

  int a;
  scanf("%d", &a);

  a%2 ? : printf("PARZYSTA");

  return 0;
}
