#include <stdio.h>

void f(const char *filename){
  char temp_arr[100][512];
  int count = 0;
  FILE* in; //uchwyt

  if((in = fopen(filename, "rt")) == NULL){
    printf("Blad otwarcia");
  } else {
    while (feof(in) == 0) {
      fscanf(in, "%s", temp_arr[count++]);
    }
    fclose(in);
  }

  for(int i = 0; i <count; i++){
    printf("%s\n", temp_arr[i]);
  }
}

int main(){

  f("result.bin");

  return 0;
}
