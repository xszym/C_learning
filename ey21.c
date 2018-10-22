#include <stdio.h>

//Switch

int main(){

  int option;

  scanf("%d", &option);
  option %= 8;
  switch(option){
    case 0:
      printf("Monday\n");
      break;
    case 1:
      printf("Tuesday\n");
      break;
    case 2:
      printf("Wednesday\n");
      break;
    case 3:
      printf("Thursday\n");
      break;
    default:
      printf("WEEKEND\n");
  }

  return 0;
}
