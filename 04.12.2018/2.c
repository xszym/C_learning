#include <stdio.h>
#include <math.h>
#include <stdlib.h>

void f1(int n, float *arr){
  for(int i = 0; i < n; i++)
    arr[i] = 1.f / (i + 1.f);
}

void f2(float *values, int n_v, int *ids, int n_i){
  for(int i = 0; i < n_i; i++)
    printf("%f, ", ids[i] >= 0 && ids[i] < n_v ? values[ids[i]] : NAN);
}

int main(){
  int m = 5, n = 4;
  scanf("%d%d", &m, &n);
  float *values = malloc(sizeof(*values) * m);
  int *ids = malloc(sizeof(*ids) * n);

  f1(m, values);

  for(int i = 0; i < n; i++)
    scanf("%d", &ids[i]);

  f2(values, m, ids, n);

  free(values);
  free(ids);

  return 0;
}
