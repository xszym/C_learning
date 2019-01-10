#include <stdio.h>
#include <string.h>

void f(char *mod, char *del, char *add){
    char * pos;
    int mod_len = strlen(mod), del_len = strlen(del), add_len = strlen(add);
    int diff_len = add_len - del_len;
    int len = mod_len;
    pos = mod - 1;
    while (1) {
      pos = strstr(pos + 1, del);
      if(!pos) break;
      len += diff_len;
      memmove(pos + add_len, pos + del_len, len - (pos + add_len - mod));
      memcpy(pos, add, add_len);
      pos += diff_len;
    }
    mod[strlen(mod)] = '\0';
}

int main(){
  char str[] = "xd jest okej";
  char ust[] = "xd";
  char wst[] = "umcs";

  f(str, ust, wst);

  printf("%s\n", str);

  return 0;
}
