#include <stdio.h>

/*
Napisz program w języku C, który obliczy największy wspólny dzielnik i najmniejszą
wspólną wielokrotność. Zaimplementuj odpowiednie funkcje i program, który sprawdza
działanie tych funkcji
/**/

int nwd(int n1, int n2){
  //NAJWIĘKSZY WSPÓLNY DZIELNIK
  /*
  int nwd = 1;
  int min = n1 < n2 ? n1 : n2;
  for(int i = 1; i <= min; i++){
    if(!(n1 % i)&& !(n2 % i)) nwd = i;
  }
  return nwd;
  */
  int pom;
  while(n2){
    pom = n2;
    n2 = n1 % n2;
    n1 = pom;
  }

  return n1;
}

int nww(int n1, int n2){
  return (n1 * n2)/nwd(n1, n2);
}

int main(){

  int a, b;

  scanf("%d %d", &a, &b);

  printf("największy wspólny dzielnik: %d, najmniejsza wspólna wielokrotność %d", nwd(a, b), nww(a, b));

  return 0;
}
