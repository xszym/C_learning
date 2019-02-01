#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef unsigned char uchar;
typedef struct{
  uchar reginster_number;
  char brand_name[15];
} Car;

char *f(const char *filename){
  FILE *in = NULL;
  char *result = malloc(512);
  Car temp;
  if((in = fopen("file", "rb")) == NULL){
    perror("Blad!");
    return "";
  } else{
    while(feof(in) == 0){
      fread(&temp, sizeof(Car), 1, in);
      strcat(result, temp.brand_name);
      strcat(result, ", ");
    }
    fclose(in);
    return result;
  }

}

int main(){
  printf("%s\n", f("nowyPlik"));
  return 0;
}
