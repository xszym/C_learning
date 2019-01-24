#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct{
  short age;
  char* name;
} Person;

int main(){
  Person p1;
  p1.age = 20;
  p1.name = malloc(20);
  strcpy(p1.name, "Szymon");

  Person p2 = p1;
  free(p1.name);
  printf("%d %s\n", p2.age, p2.name);

  return 0;
}
