#include <stdio.h>

//I decided to make a fibonacci sequence generator

int main(){

  int a = 0;
  int b = 1;
  int c;

  int max = 100;

  printf("Podaj limit: ");
  scanf("%d", &max);

  while(a <= max){
    printf("%d, ", a);
    c = a + b;
    a = b;
    b = c;
  }
  return 0;
}
