#include <stdio.h>

/*
Program liczy cene netto z podanej ceny brutto i precentu podatku
*/

int main(){

  double cenaBrutto, podatek, cenaNetto;
  printf("Podaj cene brutto: ");
  scanf("%lf", &cenaBrutto);

  printf("Podaj procent podatku: ");
  scanf("%lf", &podatek);

  cenaNetto = cenaBrutto - (cenaBrutto * podatek/100);
  printf("Cena netto wynosi %.2lf \n", cenaNetto);

  return 0;
}
