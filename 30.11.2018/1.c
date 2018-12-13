// NIE PSEUDO LOSOWE
//Zadania z wskaźnik i tablic os. wyczerpujące 3-4 lab
#include <stdio.h>
#include <stdlib.h>

typedef unsigned int uint;

void printArr(float *arr, uint n){
  for(int i = 0; i < n; i ++)
    printf("%f, ", arr[i]);
  printf("\n");
}

int main() {
  uint n;
  float *arr;
  scanf("%u", &n);

  arr = callloc(n, sizeof(*arr)); //malloc zwraca wskaźnika na void. co to void
  //calloc przypisuje 0?

  printArr(arr, n);

  arr = realloc(arr, sizeof(*arr) * 10);

  printf("%p\n", arr);

  for(int i = 0; i < 10; i++)
    arr[i] = 1.f; //!! 1.f

  printArr(arr, 10);

  free(arr); //zwalnianie pamięci
  return 0;
}
