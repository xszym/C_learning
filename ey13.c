#include <stdio.h>
#include <math.h>

/*
3. Napisz program w języku C, który obliczy pole sześciokąta foremnego. Program
powinien wczytać długości boku od użytkownika, a następnie wyświetlić wynik."
*/

int main(){
  float dlugosc_boku;

  printf("Podaj dlugosc boku: ");
  scanf("%f", &dlugosc_boku);
  printf("%f\n", 3 * pow(dlugosc_boku, 2) * sqrt(3) / 2);

  return 0;
}
