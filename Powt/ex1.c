#include <stdio.h>
#include <math.h>

int main(){

  int a, b;

  scanf("%d %d", &a, &b);



  if(b < 0 && a < 0){
    printf("a i b < 0");
  } else if(b == 0){
    printf("%f %f\n", INFINITY, NAN);
  } else {
    float x = sqrt(a / pow(b, 5));
    printf("%f\n", x);
  }

  return 0;
}
