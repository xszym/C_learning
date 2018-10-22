#include <stdio.h>

/*
Napisz program w języku C, który zapamięta wartość dowolnego
wyrażenia logicznego, a następnie wyświetli jego wartość logiczną (1 lub 0).

Zmodyfikuj program 1 tak, aby wyświetlał "true" i "false".
*/

int main(){

  int a = 3 < 2;

  printf("%d\n", a);
  a ? printf("true") : printf("false");

  return 0;
}
