#include <stdio.h>
/*
Napisz program, który wczytuje ze standardowego wejścia nieujemną liczbę n
i wypisuje na standardowym wyjściu wartość √n (wartość √n
zaokrągloną w dół do najbliższej wartości całkowitoliczbowej).
Program napisz bez użycia funkcji z biblioteki matematycznej
*/

int main(){

  int n;
  int x = 1;

  scanf("%d", &n);

  for(int i = 1; i < n; i++)
    if(i*i <= n) x = i;

  printf("%d\n", x);
  return 0;
}
