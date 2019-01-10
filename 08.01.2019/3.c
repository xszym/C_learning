#include <stdio.h>
#include <string.h>

char *f(char *str){
  char *pch, *word = strtok(str, " ,.-"), key[] = "aeoui";
  int max = 0;
  int *currect = word;
  while (word != NULL) {
    pch = strpbrk(word, key);
    int result = 0;
    while (pch != NULL) {
      result++;
      if(result > max){
        max = result;
        currect = word;
      }
      pch = strpbrk(pch + 1, key);
    }
    word = strtok(NULL, " ,.-");
  }
  return currect;
}

int main() {
  char str[] = "ala ma kiiiota";
  char *result = f(str);
  printf("%s\n", result);

  return 0;
}
