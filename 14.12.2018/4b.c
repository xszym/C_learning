#include <stdio.h>
#include <stdbool.h>

//morisa prata

//algortym naiwyny \/
char *search(char str[], char str1[]){
    bool found;
    for(int i = 0; str[i]; i++){
      found = true;
      for(int j; j < str1[j] && str[i + j]; j++)
        if(str1[j] != str[i + j]){
            found = false;
            break;
        }
      if(found) return str + i;
    }
    return NULL;
}

int main(){
  char str[] = "Ala ma kota", str1[] = "kota";
  char *found  = search(str, str1);

  if(found) printf("%s %d\n", found, found - str);
  else printf("Not found");

  return 0;
}
