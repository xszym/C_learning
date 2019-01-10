//strcmp
#include <stdio.h>
#include <string.h>

int main(){

  char s1[100];
  char s2[100];

//    scanf("%99s", s1);
//    scanf("%99s", s2);

  fgets(s1, sizeof s1, stdin);
  fgets(s2, sizeof s2, stdin);

  //strcmp i strncmp
  int comp = strncmp(s1, s2, 3);
    if(comp < 0) printf("%s\n", s1);
    else if(comp > 0) printf("%s\n", s2);
    else printf("Takie same\n");


  return 0;
}
