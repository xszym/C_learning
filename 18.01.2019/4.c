#include <stdio.h>

typedef enum {R = 4, W = 2, X = 1} FileP;

int main(){
  int mod = R + X;
  if(mod & R) printf("readable\n");
  if(mod & W) printf("writable\n");
  if(mod & X) printf("executable\n");
  return 0;
}
