#include <stdio.h>

int main(){
/*
Napisz program w języku C, który wczyta od użytkownika wartość n i obliczy sumę szeregu:
1 + 1/2 + 1/3 + ... + 1/n.
  int n;
  double sum = 0;
  scanf("%d", &n);
  for(double i = 1; i <= n; i++) sum += 1 / i;
  printf("%lf", sum);
*/

/*
Napisz program w języku C, który policzy, z ilu cyfr składa się podana liczba całkowita
  int a;
  int x = 1;
  scanf("%d", &a);
  for (a; a > 9; a /= 10) x++;
  printf("%d", x);
  return 0;
*/

/*
Napisz program, który wczyta dwie całkowite wartości określające początek i
koniec obustronnie domkniętego przedziału , a następnie wyświetli wszystkie
liczby pierwsze w tym przedziale
*/
int a, b;
scanf("%d %d", &a, &b);
for(int i = a; i <= b; i++) {
  for(int j = 2; j <= i; j++){
    if(j == i) printf("%d ", i);
    if((i % j) == 0) break;
  }
}


}
