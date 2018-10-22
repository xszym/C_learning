#include <stdio.h>

/*
 Rok przestępny jest podzielny przez 4. Wyjątkiem od tej zasady są lata kończące
 ię na 00, które nie są przestępne. Z kolei wyjątkiem od tego wyjątku są lata
 podzielne przez 400, które są przestępne. Napisz program w języku C, który
 przyjmie numer roku i wyświetli "leap year", jeżeli to rok
 przestępny, a "common year" w przeciwnym wypadku.
*/

int main(){

  int year;
  scanf("%d", &year);

  //Jest podzielny przez 4
  if(!(year%4)){
      //Jeśli kończą się na 00 są podzielne przez 100 i nie są leap
      if(!(year%100)){
        //lata podzielne przez 400 są leap
        if(!(year%400)) printf("leap year");
        else printf("common year");
      } else printf("leap year");
  } else printf("common year");

  return 0;
}
