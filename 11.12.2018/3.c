#include <stdio.h>
#include <stdlib.h>

int n = 3;

float *add(float *v1, float *v2){
  float *temp = malloc(n * sizeof(float));
  for(int i = 0; i < 3; i++) temp[i] = v1[i] + v2[i];
  return temp;
}

float *sub(float *v1, float *v2){
  float *temp = malloc(n * sizeof(float));
  for(int i = 0; i < 3; i++) temp[i] = v1[i] - v2[i];
  return temp;
}

float *mul(float *v1, float s){
  float *temp = malloc(n * sizeof(float));
  for(int i = 0; i < 3; i++) temp[i] = v1[i] * s;
  return temp;
}

float dot(float *v1, float *v2){
  float temp = 0.f;
  for(int i = 0; i < 3; i++) temp += v1[i] * v2[i];
  return temp;
}

float *cross(float *v1, float *v2){
  float *temp = malloc(n * sizeof(float));
  temp[0]= v1[1] * v2[2] - v1[2] * v2[1];
  temp[1]= v1[2] * v2[0] - v1[0] * v2[2];
  temp[2]= v1[0] * v2[1] - v1[1] * v2[0];
}

void printf_v(float *v){
  printf("{%.3f %.3f %.3f}\n", v[0], v[1], v[2]);
}

int main(){
  float v[] = {1.1, 2.2 ,3.3};
  float u[] = {1.f,2.f,3.f};
  float s =3.f;
  int wyn[2];

  printf_v(add(v, u));
  printf_v(sub(v, u));
  printf_v(mul(v, s));
  printf_v(cross(v, u));
  printf("%f", dot(v, u));


  return 0;
}
