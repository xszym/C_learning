#include <stdio.h>
#include <math.h>

/*
2. Ze zbioru wszystkich liczb naturalnych dwucyfrowych losujemy kolejno dwa razy
po jednej liczbie bez zwracania. Napisz program w języki C, który obliczy
prawdopodobieństwo zdarzenia polegającego na tym, że suma wylosowanych liczb
będzie równa 30. Wynik wyświetl w notacji naukowej.
*/

int main(){

  int zbior_x_cyfowy = 2;
  int zdarzenieA = 0;
  int sumaLiczb;
  int zwracanie;

  printf("Podaj parametry: zwracanie, suma rowna\nnp. [0 30]");
  scanf("%d %d", &zwracanie, &sumaLiczb);

  float iloscLiczb = (pow(10.0, zbior_x_cyfowy) - 1) - (pow(10.0, zbior_x_cyfowy - 1) - 1);
  float omega = iloscLiczb * (iloscLiczb - 1);

  for(int i = pow(10.0, zbior_x_cyfowy - 1); i <= sumaLiczb - pow(10.0, zbior_x_cyfowy - 1); i++){
    zdarzenieA++;
  }

  if(!zwracanie){
    zdarzenieA --;
  }

  printf("Ilosc zdarzen: %d\n", zdarzenieA);
  printf("Omega: %f\n", omega);
  printf("Ilosc liczb: %f\n", iloscLiczb);
  //%E lub %e to notacja noukowa/wykładnicza
  printf("Propabilty: %e\n", zdarzenieA/omega);



  return 0;
}
