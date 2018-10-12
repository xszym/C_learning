#include <stdio.h>

/*
2. Napisz program w języku C,który sprawdzi; czy liczba wczytana od użytkownika
jest potęgą dwójki. Program powinien wyświetić 1, jeśli liczba jest potęgą
dwójki lub 0 w przeciwnym wypadku."
*/

int main(){

  int n = 0;
  int x = 1;

  scanf("%d", &n);

  while (x <= n) {

    if(x == n) {
      printf("1\n", n);
      break;
    } else {
      x *= 2;
    }

    if(x > n) printf("0 \n");
  }

  return 0;
}
