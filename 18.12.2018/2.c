//strcmp
#include <stdio.h>
#include <string.h>

int main(){

  char str[100];
  char str_cpy[100];
  char p[] = " - slowo uzytkowanika.";

  scanf("%99s", str);
  strncpy(str_cpy, str, sizeof str_cpy - 1);
  strncat(str_cpy, p, sizeof str_cpy - strlen(str_cpy) - 1);

  printf("%s\n", str_cpy);

  return 0;
}
