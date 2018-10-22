#include <stdio.h>

/*
sumuje liczby, dopóki nie zostanie podana
wartość 0. Użycie instrukcji do...while.
*/

int main(){

  int sum = 0;
  int lastNumber;

  do{
    scanf("%d", &lastNumber);
    sum += lastNumber;
  }while(lastNumber != 0);

  printf("%d\n", sum);
  return 0;
}
