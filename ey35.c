#include <stdio.h>
/*
Napisz rekurencyjną funkcję zwracającą dla otrzymanej w argumencie
nieujemnej liczby całkowitej n wartość elementu ciągu Fibonacciego
o indeksie n.
*/

//rekurencja
unsigned long long int fibo(int n){
  int sum = 1;

  if(n > 2) sum = fibo(n - 1) + fibo(n - 2);

  return sum;
}

//Rekurnecja ogodnowa :)
unsigned long long int fiboTailCall(int n, int a, int b){
  return n < 1 ? b : fiboTailCall(n - 1, a + b, a);
}

int main(){
  int a;

  scanf("%d", &a);
  printf("%llu, ", fiboTailCall(a, 1, 0));
  printf("%llu, ", fibo(a));

  return 0;
}
