#include <math.h>
#include <stdio.h>
#include <time.h>
#include <stdlib.h>

float f(float mean, float sigma){
  float z, u1, u2;
  do{
    u1 = rand() * (1.0f / RAND_MAX);
    u2 = rand() * (1.0f / RAND_MAX);
    z = u1 * u1 + u2 * u2;
  }while( z >= 1 || z == 0);

  z = sqrt(-2.0 * log(z) / z);
  return u1 * z * sigma *mean;
}

int main(){

  srand(time(0));
  for(int i = 0; i < 100; i++)
    printf("%f\n", f(-3, 3));

  return 0;
}
