#include <math.h>

float f(int a, int b){ return sqrt((float) a * b / 3.f ); }

int main(){
  float (*fun)(int, int) = f;
  fun(10, 10);
  return 0;
}
