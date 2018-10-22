#include <stdio.h>

/*
Przyjmij cztery wartości zmiennoprzecinkowe oznaczające początek i koniec dwóch
domkniętych przedziałów. Napisz program w języku C, który wyświetli
"intersection", jeżeli te przedziały mają część wspólną lub "no intersection" w
przeciwnym wypadku
*/

int main(){

  double a, b, c, d;

  printf("Pierwszy przedzial: ");
  scanf("%lf %lf", &a, &b);
  printf("Drugi przedzial: ");
  scanf("%lf %lf", &c, &d);

  if((a >= c && a <= d) || (b >= c && b <= d) || (c >= a && c <= b) || (d >= a && d <= b)){
    printf("intersection");
  }
  else {
    printf("no intersection");
  }
  return 0;
}
