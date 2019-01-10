#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int count_words(char *arr){
  int count = 0;
  char *pch = strtok(arr, " ,.-");
  while(pch != NULL){
    count++;
    pch = strtok(NULL, " ,.-");
  }
  return count;
}

char **f(char *str, int n){
    char **result = malloc(sizeof(char*) * n);
    int i = 0;
    char *pch = strtok(str, " ,.-");
    while(pch != NULL){
      result[i++] = pch;
      pch = strtok(NULL, " ,.-");
    }
}

int main(){
  char str[] = "spice jest okej xd ";
  char *str_cpy = calloc(sizeof(str) + 1, 1);
  strcpy(str_cpy, str);
  int words = count_words(str_cpy);
  char **results = f(str, words);

  for(int i = 0; i < words; i++){
    printf("%s\n", results[i]);
  }

  return 0;
}
