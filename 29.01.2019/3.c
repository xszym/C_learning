#include <stdio.h>
#include <string.h>
#include <stdlib.h>

//strtok sscanf
int cmp_string(const void *str1, const void *str2){
  return -strcmp((char *)str1, (char *)str2);
}

int main(){
  char arr[5][100] = {"tygrysek","pingwin","papuga","koala","niedzwiec"};
  qsort(arr, 5, 100, cmp_string);
  for(int i = 0; i < 5; i++)
    printf("%s\n", arr[i]);
  return 0;
}
