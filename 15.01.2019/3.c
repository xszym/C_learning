#include <stdio.h>
#include <stdlib.h>

void f(){
  const int dimx = 800;
  const int dimy = 800;
  int color = 0;
  FILE* file = NULL; //uchwyt

  if((file = fopen("test.ppm", "wb")) == NULL){
    perror("Fopen failed");
    //return 1;
  } else {
    fprintf(file, "P6\n");
    fprintf(file, "%d %d\n", dimx, dimy);
    for(int i = 0; i < dimy; i++){
      for(int j = 0; j < dimx; j++){
        unsigned char color[3];
        color[0] = i % 255;
        color[1] = j % 255;
        color[2] = (i * j) % 255;
        fwrite(color, 1, 3, file);
            }
    }
  }
}

int main() {
  f();

  return 0;
}
