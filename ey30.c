#include <stdio.h>
#include <math.h>

/*
który policzy obwód wielokąta. Program powinien jako
pierwszą wartość pobrać ilość wierzchołków, a następnie pobierać pary liczb
określające współrzędne x i y kolejnych wierzchołków. Jako wynik należy
wyświetlić sumę długości krawędzi.
*/

int main(){
  int iloscWierzcholkow;
  double obwod = 0;
  double startX, startY;
  double x1, y1;
  double x2, y2;

  printf("Podaj ilosc wierzcholków: ");
  scanf("%d", &iloscWierzcholkow);
  printf("podaj 1. wierzcholek[x y]: ");
  scanf("%lf %lf", &startX, &startY);

  if(iloscWierzcholkow > 2){
    x1 = startX;
    y1 = startY;

    for(int i = 0; i < iloscWierzcholkow - 1; i++){
      printf("Podaj %d. wierzcholek[x y]: ", i + 2);
      scanf("%lf %lf", &x2, &y2);
      printf("Pitagoras: %lf\n", sqrt((x2-x1)*(x2-x1) + (y2-y1)*(y2-y1)));
      obwod += sqrt((x2-x1)*(x2-x1) + (y2-y1)*(y2-y1));
      x1 = x2;
      y1 = y2;
    }
    printf("Pitagoras do poczatku: %lf\n", sqrt((x1-startX)*(x1-startX) + (y1-startY)*(y1-startY)));
    obwod += sqrt((x1-startX)*(x1-startX) + (y1-startY)*(y1-startY));

  printf("%lf", obwod);
} else printf("Panie z tego nie da sie zrobic wielokata");

  return 0;
}
