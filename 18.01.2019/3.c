#include <stdio.h>

typedef enum {LEFT, RIGHT, UP, DOWN} Direction;
//enum Direction {LEFT, RIGHT, UP, DOWN};

int main(){
  Direction s;
  //enum Direction s;
  scanf("%d", &s);

  switch(s){
    case LEFT: printf("LEFT\n"); break;
    case RIGHT: printf("RIGHT\n"); break;
    case UP: printf("UP\n"); break;
    case DOWN: printf("DOWN\n"); break;
    default: printf("Anywhere\n");
  }

  return 0;
}
