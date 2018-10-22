#include <stdio.h>

//przyjmuje od użytkownika 3 liczby całkowite i wyświetla największą z nich

#define ROZMIAR 100

int main(){

  int a, b, c;

  scanf("%d %d %d", &a, &b, &c);

  if (a > b){
    if(a > c) printf("%d\n", a);
    else printf("%d\n", c);
  } else {
    if (b > c) printf("%d\n", b);
    else printf("%d\n", c);
  }

  return 0;
}
