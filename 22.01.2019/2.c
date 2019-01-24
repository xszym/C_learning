#include <stdio.h>
#include <math.h>

typedef struct{
  float x, y;
} Point;


int main(){
  float sum = 0;
  Point arr[4] = {1, 1, 1, 2, 2, 2, 2, 1};

  for(int i = 0; i < 4; ++i)
    sum += sqrt(pow(arr[i].x - arr[(i+1)%4].x, 2)
      + pow(arr[i].y - arr[(i+1)%4].y, 2));
      //Modulo 4 jest ciekawe. nie pozwala wyjść poza tablice
  printf("%f\n", sum);

  return 0;
}
