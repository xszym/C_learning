#include <stdio.h>

typedef enum {CHAR, UCHAR, INT, FLOAT} Type;
//Czutanie trochę binarnie trochę tekstowo xD file malloc
float f(void *arr, int n, Type type){
float sum = 0.f;
  switch (type) {
    case CHAR:{
      char *arrc = arr;
      for(int i = 0; i < n; i++) sum += arrc[i];
      break;
    } case UCHAR:{
      unsigned char *uchar = arr;
      for(int i = 0; i < n; i++) sum += uchar[i];
      break;
    }
    case INT:{
      int *arrint = arr;
      for(int i = 0; i < n; i++) sum += arrint[i];
      break;
    }
    case FLOAT:{
      float *arrfloat = arr;
      for(int i = 0; i < n; i++) sum += arrfloat[i];
      break;
    }
  }

  return sum / n;
}

int main(){
  int arr[5] = {50, 100, 100, 100, 43};

  printf("%f\n", f(arr, 5, INT));

  return 0;
}
