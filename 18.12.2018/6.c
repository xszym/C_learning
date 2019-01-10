#include <string.h>
#include <stdio.h>

int main(){
  const char *str = "Ala ma kota.";
  char str2[10] = {0};
  scanf("%10s", str2);
  char *result = strstr(str, str2);
  printf("%s", result ? result : "nie znaleziono");

  return 0;
}
