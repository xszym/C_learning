#include <stdio.h>
#include <string.h>

int main(){

  char password[6] = "root";
  char inputPassword[6];

  printf("Give me a haslo mordeczko: ");
  //scanf("%s", &inputPassword);
  gets(inputPassword);


  !strcmp(password, inputPassword) ? printf("Zalogowany\n") : printf("Zle haslo\n");

  printf("Dlugosc hasla: %d\nDlugosc podanego hasla: %d\n", strlen(password), strlen(inputPassword));

  return 0;
}
