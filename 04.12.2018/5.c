#include <stdio.h>

void f(int *pa, int *pb, float *pc){
  *pc = (float) *pa / *pb;
}

int main(){
  int pa = 4, pb = 3;
  float pc;
  f(&pa, &pb, &pc);
  printf("%f\n", pc);
}
