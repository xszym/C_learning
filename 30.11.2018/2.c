#include <stdlib.h>
#include <stdio.h>

/*
Napisz funkcję w języku C, która przyjmie jako argumenty tablicę
wartości zmiennoprzecinkowych, jej rozmiar, dwie wartości
zmiennoprzecinkowe - minimum i maksimum, oraz wskaźnik na
uprzednio zaalokowaną wartość całkowitą.
Funkcja powinna zaalokować i zwrócić tablicę, w której
znajdą się liczby z lewostronnie domkniętego przedziału
od minimum do maksimum. Pod wartością wskaźnika z argumentu
 należy zapisać rozmiar nowo utworzonej tablicy.
*/

float *intsert(float *arr, int n, float min, float max, int *size){
  for(int i = 0; i < n; ++i)
    if(arr[i] >= min && arr[i] < max)
      (*size)++;

  float *result = malloc(sizeof(*result) * (*size));

  for(int i = 0, j = 0; i < n; ++i)
    if(arr[i] >= min && arr[i] < max)
      result[j++] = arr[i];

  return result;
}

int main(){

  int n = 10;
  float arr[] = {0.5f, 0.7f, 1.25f, 6.25f, 9.3f, 1.13f, 2.23f, 3.2f, 6.23f, 1.78f};

  int value;
  float *result = insert(arr, n, 1.13, 6.3, &value);

  for(int i = 0; i < value; i++)
    printf("%f, ", result[i]);
  printf("\n");

  return 0;
}
