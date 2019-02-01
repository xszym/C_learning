#include <stdio.h>
#include <stdlib.h>

int main(){
  FILE *in = NULL;

  float avg = 0.f;
  int n = 0;
  char buffer[25];

  if((in = fopen("pliku", "rt")) == NULL){
    perror("Blad");
    return 1;
  } else {
    while(feof(in) != 0){
      float temp;
      fscanf(in, "%s: %f,", buffer, &temp);
      avg =+ temp;
      n++;
    }
    fclose(in);
  }
  printf("%f\n", avg / n);

  return 0;
}
