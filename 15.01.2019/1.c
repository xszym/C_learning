#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

//BUBLE SORT
void sort(int *arr, int n){
  for(int i = 0; i < n; ++i)
    for(int j = 0; j < n - i - 1; ++j)
      if(arr[j] > arr[j + 1]){
        int temp = arr[j];
        arr[j] = arr[j + 1];
        arr[j + 1] = temp;
      }
}

//Comparator for qsort
int compare_int(const void *a, const void *b) {
  return *(int*)a - *(int*)b;
}

void f(const char *filename){
  srand(time(NULL));

  FILE* in; //uchwyt
  int arr[512], count = 0, min, max;

  if((in = fopen(filename, "r+t")) == NULL){
    printf("Blad otwarcia");
  } else {
    while (feof(in) == 0) {
      fscanf(in, "%d", &arr[++count]);
    }
    min = arr[0];
    max = arr[count - 1];

    for(int i = 0; i < 5; i++) arr[count++] = min + (max - min);

    //sort(arr, count);
    qsort(arr, count, sizeof(int), compare_int);

    fseek(in, 0, SEEK_SET);
    for(int i = 0; i < count; i++)
      fprintf(in, "%d ", arr[i]);
    fclose(in);
  }
  printf("%d\n%d\n", min, max);

}

int main() {

  f("test");

  return 0;
}
