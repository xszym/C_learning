#include <stdio.h>
#include <time.h>
#include <stdlib.h>

#define C 1000
//Napisz funkcję w języku C, która oblicza wartość liczby PI metodą Monte Carlo

int main(){

  srand(time(NULL));
  int n;
  int in = 0;

  scanf("%d", &n);

  for(int i = 0; i < n; i++){
      int x = (rand() % (C + 1 - 0)) + 0 - (C / 2);
      int y = (rand() % (C + 1 - 0)) + 0 - (C / 2);

      if((x * x) + (y * y) <= (C/2) * (C/2)){
        in++;
      }
  }

  printf("%f\n", (float) in/n*4);

  return 0;
}
