#include <stdio.h>

/*
2. Ze zbioru wszystkich liczb naturalnych dwucyfrowych losujemy kolejno dwa razy
po jednej liczbie bez zwracania. Napisz program w języki C, który obliczy
prawdopodobieństwo zdarzenia polegającego na tym, że suma wylosowanych liczb
będzie równa 30. Wynik wyświetl w notacji naukowej.
*/

int main(){

  float iloscLiczb = 99-9;
  float omega = iloscLiczb * (iloscLiczb - 1);
  float zdarzenieA = 10;

  //%E lub %e to notacja noukowa/wykładnicza
  printf("%e\n", zdarzenieA / omega);

  return 0;
}
