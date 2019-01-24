#include <string.h>
#include <stdio.h>

int main(){

  char *str1 = "Napis1";
  char *str2 = "Napis2";

  int result = strcmp(str1, str2);

  if(result < 0) printf("%s\n", str1);
  else if (result > 0) printf("%s\n", str2);
  else printf("takie same");

  return 0;
}
