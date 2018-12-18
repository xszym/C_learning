#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

float f(float x) {
  return sqrt(x * x - 2 * sin(x));
}

float myIntegral(float begin, float end, int steps){
  float diff = end - begin, s = 0.f;
  for(int i = 0; i < steps; i++) s+=f(begin + ((float) rand() / (float) RAND_MAX) * diff);
  return diff/steps * s;
}

int main(){

  srand(time(0));
  float begin, end;
  int steps;

  scanf("%f%f%f", &begin, &end, &steps);
  printf("%d\n", myIntegral(begin, end, steps));

  return 0;
}
