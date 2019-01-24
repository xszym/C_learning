#include <stdio.h>
#include <math.h>

typedef struct{
  float *x, *y;
} Point;

int main(){
  Point p1, p2;
  float p1_v = 0, p2_v = 1;
  p1.x = p1.y = &p1_v;
  p2.x = p2.y = &p2_v;
  float d = sqrt((*p2.x-*p1.x)*(*p2.x-*p1.x) + (*p2.y-*p1.y)*(*p2.y-*p1.y));
  printf("%f\n", d);

  return 0;
}
