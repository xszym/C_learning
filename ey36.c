#include <stdio.h>

/*
Napisz funkcję rekurencyjną w języku C, która dla otrzymanej w argumencie
nieujemnej liczby całkowitej n zwraca wartość elementu o indeksie n ciągu
zdefiniowanego w następujący sposób:
a0 = a1 = 1
an = an-1 + n    dla n parzystych,
an = an-1 * n    dla n nieparzystych
*/

int funkcja(int n, int wynik){
  if(n > 1){
    if(n%2){
      wynik = n * funkcja(n - 1, wynik);
    } else {
      wynik = n + funkcja(n - 1, wynik);
    }
  }
  return wynik;
}

int main(){
  int a, b;
  scanf("%d %d", &a, &b);

  printf("a = %d, ", funkcja(a, 1));
  printf("b = %d, ", funkcja(b, 1));

  return 0;
}
