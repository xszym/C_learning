#include <stdio.h>
#include <stdlib.h>

int main(){

      int a;

      printf("Co chcesz zrobic? \n1. Podskoczyc \n2. Napisac program \n3. Biec \n4. Wyjsc \n");
      scanf("%d", &a);

      switch(a){
        case(1): printf("HOP HOP");
          break;
        case(2): printf("PROGRAM");
          break;
        case(3): printf("RUN FOREST RUN!!!");
          break;
        default: printf("Baaaaj");
          exit(0);
          break;
  }

  return 0;

}
