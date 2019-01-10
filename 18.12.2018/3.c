//strcmp
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(int argc, const char **argv){
  char password_correct = 0;
  char password[16] = {'\0'};

  if(argc != 2){
    printf("uzycie: %s haslo", argv[0]);
    return EXIT_FAILURE;
  }

  strcpy(password, argv[1]);
  password_correct = !strcmp(password, "poprawne");

  printf("%s\n", password);
  if(!password_correct){
    printf("niepoprawne");
    return EXIT_FAILURE;
  }

  if(password_correct){
    printf("poprawne");
    return EXIT_FAILURE;
  }


  return 0;
}
