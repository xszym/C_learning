#include <complex.h> //Liczby zespolone
#include <stdio.h>

int main(){
  //Liczby zespolone
  double complex z1 = 1.0 + 3.0 * I;
  double complex z2 = 1.0 - 4.0 * I;

  double complex sum = z1 + z2;
  printf("%.2f%+.2f*i \n", creal(sum), cimag(sum));

  double complex diff = z1 - z2;
  printf("%.2f%+.2f*i \n", creal(diff), cimag(diff));

  double complex mul = z1 * z2;
  printf("%.2f%+.2f*i \n", creal(mul), cimag(mul));

  double complex div = z1 / z2;
  printf("%.2f%+.2f*i \n", creal(div), cimag(div));

  //Sprzężenie zespolone
  double complex conjugate = conj(z1);
  printf("%.2f%.2f*i \n", creal(conjugate), cimag(conjugate));
  return 0;
}
