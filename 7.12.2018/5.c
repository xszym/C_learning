#include <stdlib.h>
#include <stdio.h>

int max(const void * a, const void * b){
  float av = *(float*)a;
  float bv = *(float*)b;
  if(av < bv) return -1;
  else if(av == bv) return 0;
  else if(av > bv) return 1;
}

int min(const void * a, const void * b){
  float av = (*(float*)a);
  float bv = (*(float*)b);
  if(av > bv) return -1;
  else if(av == bv) return 0;
  else if(av < bv) return 1;
}

int main(){
  int arr1[] = {1.f, 2.f, 4.f, 14.f, -13.f, 141.f, 4.f, -1.f, 0.f, -5.f};
  int arr2[] = {1, 2, 4, 14, -13, 141, 4, -1, 0, -5};

  qsort (arr1, 10, sizeof(float), min);

  for(int i = 0; i < 10; i++)
    printf("%f, ", arr1[i]);

  return 0;
}
//stdlib wikibooks //cpp reference
