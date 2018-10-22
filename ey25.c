#include <stdio.h>

//pobiera granice przedziału domkniętego w
//formacie <a;b>, a następnie wyświetla i zlicza wartości bez cyfry 5.
int main(){

  int a, b;
  int sum = 0;

  scanf("<%d;%d>", &a, &b);

  for(int i = a; i <=b; i++) {
    if(i != 5) {
    sum += i;
    printf("%d\n", i);
  }
  }

  printf("Suma: %d", sum);
  return 0;
}
