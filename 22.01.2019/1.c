#include <stdio.h>
#include <math.h>

typedef struct{
  float x, y;
} Point; //Pamiętać o średniku :)
/*
struct Point{
  float x, y;
};
struct Point{
  float x, y;
} p1{.y = 2}, p2{1, 2}; //Deklaracja
*/


int main(){
  Point p1, p2;
  scanf("%f%f%f%f", &p1.x, &p1.y, &p2.x, &p2.y);
  float d = sqrt((p2.x-p1.x)*(p2.x-p1.x) + (p2.y-p1.y)*(p2.y-p1.y));
  printf("%f\n", d);

  return 0;
}
