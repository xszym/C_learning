#include <stdio.h>
/*
Napisz rekurencyjną funkcję zwracającą dla otrzymanej w argumencie
nieujemnej liczby całkowitej n wartość elementu ciągu Fibonacciego
o indeksie n.
*/

int fibo(int n){
  int sum = 1;
  
  if(n > 2) sum = fibo(n - 1) + fibo(n - 2);

  return sum;
}

int main(){
  int a;

  scanf("%d", &a);
  printf("%d", fibo(a));

  return 0;
}
