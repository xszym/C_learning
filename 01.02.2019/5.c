#include <stdio.h>
#include <string.h>

typedef unsigned char uchar;
typedef struct{
  uchar reginster_number;
  char brand_name[15];
} Car;

void f(Car *arr, int n, const char *filename){
  FILE *out = NULL;
  if((out = fopen("file", "wb")) == NULL){
    perror("Blad!");
    return;
  } else{
    fwrite(arr, sizeof(Car), n, out); //(tablica, ile zajmuje 1 element, ilosc elementow, plik wyjsciowy)
    fclose(out);
  }
}

int main(){
  Car arr[2] = {1, "Opel", 2, "Fiat"};
  f(arr, 2, "nowyPlik");
  return 0;
}
