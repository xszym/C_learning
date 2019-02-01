#include <stdio.h>
#include <string.h>

typedef enum {PIES, KOT} AnimalType;

typedef struct {
  char name[10];
  AnimalType type;
  void (*say_something)(int n);
} Animal;

void mial(int n){
  for(int i = 0; i < n; ++i) printf("mial ");
}
void hau(int n){
  for(int i = 0; i < n; ++i) printf("hał ");
}

Animal create_animal_obj(AnimalType type, char *name){
  Animal animal;
  animal.type = type;
  for(int i = 0; i < 10; i++) animal.name[i] = '\0';
  memcpy(animal.name, name, strlen(name));
  if(type == PIES) animal.say_something = mial;
  else if(type == KOT) animal.say_something = hau;
  return animal;
}

int main(){
  Animal kot = create_animal_obj(KOT, "Zbigniew");
  Animal pies = create_animal_obj(PIES, "Zbyszeg");
  printf("%s\n", kot.name);
  kot.say_something(5);
  printf("\n");
  printf("%s\n", pies.name);
  pies.say_something(8);
  return 0;
}
