#include <stdio.h>

/*
Napisz funkcję rekurencyjną w języku C, która dla otrzymanej w argumencie
nieujemnej liczby całkowitej k oraz liczby rzeczywistej x zwraca wartość
elementu o indeksie k ciągu zdefiniowanego w następujący sposób:
T0(x) = 1
T1(x) = x
Tk(x) = 2*x*Tk-1(x) - Tk-2(x)
*/

float f(int k, float x, float a, float b){
    return k == 1 ? b : f(k - 1, x, b, 2 * x * b - a);
}

int main(){
  int k;
  float x;
  printf("Podaj [k x]\n");
  scanf("%d %f", &k, &x);

  printf("%f", f(k, x, 1, x));

  return 0;
}
