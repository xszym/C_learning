#include <stdio.h>
#include <math.h>

/*
dla podanych wartości x, y oraz n wyliczy wartość potęgi dwumianu: (x + y)^n.
*/

int test(int x, int y, int n, int wynik){
  if(n<1) return wynik;
  wynik = (x+y) * test(x, y, n - 1, wynik);
}

int main(){
  int x, y, n;

  scanf("%d %d %d", &x, &y, &n);

  //Done with math.h
  printf("\n\n\n%f\n", pow((x+y), n));
  //Done with recursion 
  printf("%d\n", test(x, y, n, 1));

  return 0;
}
