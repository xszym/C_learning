#include <stdio.h>
#include <string.h>
#include <stdlib.h>

//Liczymy słowa w pliku
//strtok sscanf

int count_Word(char * str){
  int n = 0;
  char *pch = strtok(str, " ,.-!?");
  while(pch != NULL){
    n++;
    pch = strtok(NULL, " ,.-!?"); //zastąpnienie znaku nullem żeby nie stać w miejscu
  }
  return n;
}

int f(const char *filename){
  char c;
  int count = 0;
  FILE *in = NULL;

  if((in = fopen(filename, "rt"))== NULL){
    perror("error");
  } else {
    fseek(in, 0, SEEK_END); //ustawienia kursora na koniec (strumien, ,kursor) nauczyć się fgetpouse
    long file_size = ftell(in);
    fseek(in, 0, SEEK_SET); //kursor na początek
    char *buffer = malloc(file_size); //Tworzenie buffora
    do {c = fgetc(in); buffer[count++] = fgetc(in); } while (c != EOF); //EOF end of filename
    fclose(in); //ZAMYKAMY PLIK MORDOO XD
    return count_Word(buffer);
  }
}

int main(){
  
  return 0;
}
