#include <stdio.h>
#include <string.h>
/*
który policzy, z ilu cyfr składa się podana
liczba całkowita
*/


int main(){

  int a;
  int d = 1;
  scanf("%d", &a);

  for(int i = a; i >= 10 || i <= -10 ; i /= 10) d++;

  printf("%d", d);

  return 0;
}
