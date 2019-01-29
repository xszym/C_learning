#include <stdlib.h>
#include <stdio.h>
//#include <string.h> //memcpy(dst, src, size);
#include <assert.h>

void my_memorycpy(void *dest, void *src, size_t n){
  char *p_dest = (char*) dest;
  char *p_src = (char*) src;
  for(int i = 0; i<n; ++i)
    p_dest[i] = p_src[i];
}

void swap(void *a, void *b, size_t size){
  char *temp = malloc(size);
  assert(temp);
  my_memorycpy(temp, a, size);
  my_memorycpy(a, b, size);
  my_memorycpy(b, temp, size);
  free(temp);
}

int main(){

  int a = 3, b = 4;
  float x = 3.2, y = 5.5;
  printf("%d, %d\n", a, b);
  printf("%f, %f\n", x, y);
  swap(&a, &b, sizeof(a));
  swap(&x, &y, sizeof(x));
  printf("%d, %d\n", a, b);
  printf("%f, %f", x, y);


  return 0;
}
