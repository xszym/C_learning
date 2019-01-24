#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void f(const char *filename, const char *str){
  char *new_content = NULL, *temp = NULL;
  int offset = 0;
  int count = 0;
  long file_size; //fpos_t file_size;
  FILE* file; //uchwyt
  char c;


  if((file = fopen(filename, "r+")) == NULL){
    printf("Blad otwarcia");
  } else {

    fseek(file, 0, SEEK_END);
    file_size = ftell(file); //fgetpos(file, &file_size);
    temp = calloc(file_size, 1);
    new_content = calloc(file_size + strlen(str) - 5, 1);

    fseek(file, 0, SEEK_SET);
    char c;
    int i = 0;
    do {
      c = fgetc(file);
      temp[i++] = c;
    } while(c!= EOF);

    temp[i - 1] = '\0';

    for(int i = 0, offset = 0; i < file_size; i++){
      if(temp[i] != '*') new_content[i + offset] = temp[i];
         else{
          for(int j = 0; j < strlen(str); ++j){
            new_content[i + offset + j] = str[j];
            offset += strlen(str - 5);
            i += 4;
          }
      }
    }

    //fseek(file, 0, SEEK_SET);
    fprintf(file, "%s", new_content);
    /*do{
      c = fgetc(file);
      if(c == '*'){
        count++;
        if(count == 5){
          fseek(file, -5, SEEK_CUR); //przesunięcie kursora o 5 w lewo //SEEK_SET lub SEEK_END
          fputs(str, file);
        } else {
          count = 0;
        }
      }
    }while (c != EOF); */
    fclose(file);
  }
}

int main(){

  //f("result.bin", "abc");
  f("result2.bin", "abc");


  return 0;
}
