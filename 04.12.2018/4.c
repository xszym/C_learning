#include <stdio.h>

typedef unsigned int uint

void f(int ***arr, uint ax, uint ay, uint dx, uint dy){
  if(arr[ax][ay][0] > arr[dx][dy][1]) arr[dx][dy][1] = -1;
  else arr[ax][ay][1] = arr[ax][ay][0] = -1;
}

void print_arr(int ***arr, uint n, uint m){
  for(uint i = 0; i < n; i++){
    for(uint j = 0; i < m; j++)
      printf("%c ", arr[i][j][0] == -1 && arr[i][j][1] == -1? 'X' : '0');
    printf("\n");
  }

}

int main(){
  uint n, m, c, ax, ay, dx, dy;
  scanf("%d%d", &m, &n);
  int ***battelfild = malloc(n * sizeof(*battelfild));
  for(int i = 0; i< n; i++){
    battelfild[i] = malloc(m * sizeof(**battelfild));
    for(int j = 0; j < m; j++)
      battelfild[i][j] = malloc(2* sizeof(***battelfild));
  }

  for(int i = 0; i< n; ++i){
    for(int j = 0; j < m; j++)
      scanf("%d%d", &battelfild[i][j][0], &battelfild[i][j][1]);
  }
  scanf("%u", c);

  for(uint i = 0; i < c; i++){
    scanf("%u%u%u%u", &ax, &ay, &dx, &dy);
    f(battelfild, ax, ay, dx, dy);
  }
  printf_arr(battelfild, n, m);

  for(uint i = 0; i < n; ++i){
    for(uint j = 0; j < m; ++j)
      free(battelfild[i][j]);
    free(battelfild[i]);
  } free(battelfild);

  return 0;
}
/*
Napisz program w języku C, który wczyta od użytkownika wymiary prostokątnego
pola bitwy NxM, a następnie dla każdego pola dwie wartości całkowite A oraz D.
Na każdym polu znajduje się działo: A definiuje jego moc ataku, zaś D jego
obronę. Działa strzelają do siebie nawzajem, jeśli działo atakujące ma większą
 wartość ataku niż wartość defensywy przeciwnika to wygrywa walkę i niszczy
 działo atakowane. W przeciwnym wypadku wygrywa działo broniące się, niszcząc
 działo atakujące. Program po wczytaniu pola bitwy powinien wczytać wartość
 nieujemnej zmiennej całkowitej C, a następnie C sekwencji danych:
 ax, ay, dx, dy, gdzie ax, ay to współrzędne działa atakującego, zaś dx, dy
 działa ostrzeliwanego. Po każdej takiej operacji z pola bitwy powinno zniknąć
 jedno działo. Na koniec program powinien wyświetlić stan pola bitwy w formie:
0 X 0 0 0
0 0 0 X 0
X X 0 0 0
,gdzie X - oznacza działo zniszczone, a O - działo, które pozostało na polu bitwy.
Użyj dynamicznej alokacji pamięci, rozwiązanie powinno być rozwiązaniem optymalnym.
PRZYKŁAD:
Wejście:
5 3
1 5 2 6 9 2
1 5 7 1 2 2
5 3 2 8 9 5
6 6 8 2 4 1
3 6 4 2 8 3
3
0 0 4 2
4 2 0 2
1 1 2 1
Wyjście:
X O X
O X O
O O O
O O O
O O O
*/
