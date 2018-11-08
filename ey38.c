/*
Pewna obojnacza populacja rozwija się w taki sposób, że na wiosnę wszystkie
osobniki łączą się w pary, a każda para ma jedno młode. W lecie liczebność nie
zmienia się. Przez jesień populacja pozbywa się dziesięciu najsłabszych
osobników. Zimę przeżywa 60% populacji. Napisz funkcję rekurencyjną w języku C,
która przyjmie początkową liczebność populacji
oraz rok i porę roku (wiosna - 0, ..., zima - 3) sprawdzenia jej wielkości.
Funkcja powinna zwrócić liczebność populacji w podanym roku, po zakończeniu
podanej pory roku. Zakładamy, że początkowa liczebność jest odczytana w roku 0,
na początku wiosny. Jeżeli pośrednim lub ostatecznym wynikiem będzie
liczba niecałkowita, zaokrąglamy wynik na niekorzyść populacji.
Dodatkowo napisz program w języku C, który sprawdzi działanie funkcji.
*/

#include <stdio.h>

int stado(int licz, int pora, int poraEnd, int rok, int rokEnd){
  if(licz <= 0) printf("gatunek wymark pora: %d roku %d\n", pora, rok);
  if((pora > poraEnd && rok == rokEnd) || (rok > rokEnd) || licz <= 0){
        if(licz < 0) licz = 0;
        return licz;
  }
  switch(pora){
    case 0:
      stado(licz + licz/2, 1, poraEnd, rok, rokEnd);
      break;
    case 1:
      stado(licz, 2, poraEnd, rok, rokEnd);
      break;
    case 2:
      stado(licz - 10, 3, poraEnd, rok, rokEnd);
      break;
    case 3:
      stado(licz * 0.6, 0, poraEnd, rok + 1, rokEnd);
      break;
  }
}

int main(){
  int liczebnosc, poraRoku, rok;
  printf("podaj [liczenosc pore_roku(0-3) rok]\n");
  scanf("%d %d %d", &liczebnosc, &poraRoku, &rok);
  if(poraRoku > -1 && poraRoku < 4 && rok > -1)
    printf("\n%d\n", stado(liczebnosc, 0, poraRoku , 0, rok));
  else printf("Nieprawidłowy format danych");

  return 0;
}
