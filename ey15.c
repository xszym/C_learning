#include <stdio.h>

/*
generator licz pierwszych
*/

int main(){

  printf("2, ");
  for(long int i = 3; i < 2147483647; i += 2){

    for(long int j = 3; j < i; j++){

      if(!(i % j)){
        j = i;
        goto end;
      }
    }

    printf("%d, ", i);
    end:;
  }

  return 0;
}
