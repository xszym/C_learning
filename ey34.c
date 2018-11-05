#include <stdio.h>

/*
Napisz rekurencyjną funkcję, która dla otrzymanej w argumencie
nieujemnej całkowitej liczby n zwraca jako wartość n!.
*/
int wynik = 1;

int silnia(int a){
  if(a>1){
    wynik = a * silnia(a - 1);
  }
  return wynik;
}

int main(){
  int n;
  scanf("%d", &n);
  printf("%d", silnia(n));
  return 0;
}
