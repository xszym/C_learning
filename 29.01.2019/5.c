#include <stdlib.h>
#include <string.h>
#include <stdio.h>

//Interpretacja tablicy 1 wymiarowej jako 2 wymiarowa
typedef struct {
  char name[20];
  int age;
  float h;
} Person;

int f_cmp(const void *p1, const void *p2){
  return strcmp(((Person *)p1)->name, ((Person *)p2)->name);
  //return strcmp(*((Person *)p1).name, (*(Person *)p2).name);
}

// int f_cmp2(const void *p1, const void *p2){
//   return strcmp((*(Person *)p1).age, (*(Person *)p2).age);
//   //return strcmp(*((Person *)p1).name, (*(Person *)p2).name);
// }


int main(){
  Person arr[3] = {"Emil", 12, 200.f, "Adam", 13, 160.f, "Eliza", 16, 111.f};
  qsort(arr, 3, sizeof(Person), f_cmp);
  for(int i = 0; i < 3; i++)
    printf("%s\n", arr[i].name);
}
