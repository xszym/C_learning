#include <stdio.h>
#include <stdlib.h>

void f(){
  const int dimx, dimy;
  FILE* image = NULL; //uchwyt

  if((image = fopen("test.ppm", "r+b")) == NULL){
    perror("Fopen failed");
    //return 1;
  } else {
    fscanf(image, "P6\n%d %d\n255\n", &dimx, &dimy);
    unsigned char *data = malloc(dimx * dimy * 3);
    fread(data, 3 * dimx, dimy, image);

    for(int i = 0; i < dimx * dimy * 3; i++){
      data[i] += (data[0] + 50) > 255 ? 255 : data[i] + 50;
    }

    fseek(image, 0, SEEK_SET);
    fwrite(data, dimx * 3, dimy, image);

    // fprintf(image, "P6\n");
    // fprintf(image, "%d %d\n", dimx, dimy);
    //  for(int i = 0; i < dimy; i++){
    //    for(int j = 0; j < dimx; j++){
    //      unsigned char color[3];
    //      color[0] = data[i] > 255 ? 255 : data[i];
    //      color[1] = data[i] > 255 ? 255 : data[i];
    //      color[2] = data[i] > 255 ? 255 : data[i];
    //      fwrite(color, 1, 3, image);
    //    }
    //  }
  }

  fclose(image);
}

int main() {
  f();

  return 0;
}
