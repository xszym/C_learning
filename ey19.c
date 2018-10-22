#include <stdio.h>

/*
Podaje wartość bezwzględną liczby wczytanej od użytkownika. Bez instrukcji
sterującej oraz zewnętrzych biblotek
*/

int main(){

  int x;

  scanf("%d", &x);

  int y = x >> 31;
  printf("%d", (x ^ y) -y);

  return 0;
}
