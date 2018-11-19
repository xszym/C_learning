#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/*
Napisz funkcję w języku C, która przyjmie jako argument dwuwymiarową tablicę
liczb zmiennoprzecinkowych oraz jej wymiary. Funkcja powinna tak zmodyfikować
tą tablicę, aby w każdym polu znalazła się średnia arytmetyczna wartości
w nim samym oraz polach sąsiednich: górnym, dolnym, lewym i prawym.
Jeżeli pole znajduje się na krawędzi tablicy, należy policzyć średnią z
mniejszej liczby sąsiadów. Napisz program, który przetestuje działanie tej
funkcji, wypełniając tablicę losowymi wartościami.
*/


void f(int m, int n, float arr[m][n]){
  for(int i = 0; i < m; i++){
    for(int j = 0; j < n; j++){
        float sum = 0;
        int values = 5;

        if(j + 1 >= n){
          values--;
        } else {
          sum += arr[i][j + 1];
        }

        if(j - 1 < 0){
          values--;
        } else {
          sum += arr[i][j - 1];
        }

        if(i - 1 < 0){
          values--;
        } else {
          sum += arr[i - 1][j];
        }

        if(i + 1 >= m){
          values--;
        } else {
          sum += arr[i + 1][j];
        }

        sum += arr[i][j];

        arr[i][j] = (float) sum / values;

      printf("%.2f / %d = %.2f | ",sum, values, arr[i][j]);
      }
    printf("\n");
  }
}

int main(){

  int m, n;
  scanf("%d %d", &m, &n);
  float arr[m][n];

  srand(time(NULL));

  for(int i = 0; i < m; i++){
    for(int j = 0; j < n; j++){
        arr[i][j] = (float) (rand() % 100) / 10.f;
        printf("%f, ", arr[i][j]);
    }
    printf("\n");
  }

  printf("\n\n");

  f(m, n, arr);

  return 0;
}
