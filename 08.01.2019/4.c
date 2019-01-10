#include <stdio.h>
#include <string.h>

int main(){
  char buf[64], first[64] = {};
  fgets(first, 63, stdin);
  while (1) {
    fgets(buf, 63, stdin);
    if(strlen(buf) == 1) break;
    if(strcmp(buf, first) < 0) strcpy(first, buf);
  }
  printf("%s\n", first);
  return 0;
}
