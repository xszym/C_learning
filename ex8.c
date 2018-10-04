#include <stdio.h>

int main(){
  int i;
 for (i = 0 ; i < 10 ; ++i) {
   printf ("Poczatek\n");
   if (i > 4) continue ; //Jesli i>4 nie przechodzi dalej tyko wraca do poczatku ;)
   printf ("Koniec\n");
 }
}
