#include <stdio.h>
#include <stdlib.h>

int main(){
  int x;
  FILE *in = NULL;
  if((in = fopen("file", "rb")) == NULL){
    perror("Blad!"); return 0; }
  else{
    fscanf(in, "Ala ma %d kotó w następującym wieku:\n", &x);
    int *buff = malloc(x * sizeof(*buff));
    fread(buff, sizoof(*buff), x, in);
    fclose(in);

    for(int i = 0; i < x; i++) printf("%d ", buff[i]);

    free(buff); //PAMIĘTAĆ O ZWOLNIENIU PAMIĘCI XD
  }

  return 0;
}
