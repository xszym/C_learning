#include <stdio.h>
#include <stdlib.h>

int main(){
    int a;

  do{
    printf("\n");
    printf("1. Ktora godzina? \n");
    printf("2. Jaki dzis dzien\n");
    printf("3. Jaki mamy rok\n");

    scanf("%d", &a);

  } while (a > 1 || a > 3);



    return 0;
}
