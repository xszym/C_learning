#include <stdio.h>

float add(float a, float b){ return a + b; }
float sub(float a, float b){ return a - b; }
float mul(float a, float b){ return a * b; }
float div(float a, float b){ return a / b; }

int main(){
  float x, y;
  unsigned int o;
  float (*ptr_f[4]) (float a, float b);

  ptr_f[0] = add;
  ptr_f[1] = sub;
  ptr_f[2] = mul;
  ptr_f[3] = div;

  scanf("%f%f%u", &x, &y, &o);
  printf("%f\n", ptr_f[o](x, y));

  return 0;
}
