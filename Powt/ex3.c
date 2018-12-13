#include <stdio.h>

int binToDec(char *a, int num){
  return *a ? binToDec(a + 1, (num << 1) | (*a == '1' ? 1 : 0)) : num;
}

int binToDec_it(char str[]){
  int num = 0;
  for(int i = 0; str[i]; i++){
    num = (num << 1) | (str[i] - 48);
  }
  return num;
}

void f(char value1[], int value2, int *result){
  *result = binToDec_it(value1) + value2;
}

int main() {

   int result;

   f("10110", 0, &result);

  printf("%d\n", result);

  return 0;
}
