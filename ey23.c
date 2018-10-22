#include <stdio.h>

/*
Napisz program w języku C, który wczyta użytkownika dwie liczby całkowite n i k.
Następnie program powinien wyświetlić liczbę n, 10 razy.
Na koniec program powinien wyświetlić liczbę k, n razy.
*/

int main(){

  int n, k;

  scanf("%d %d", &n, &k);

  for(int i = 0; i < 10; i++) printf("%d, ", n);
  for(int i = 0; i < n; i++) printf("%d, ", k);

  return 0;
}
