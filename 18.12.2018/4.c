//strcmp
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int strcmp_wrapper(const void *a, const void *b) {
  return strcmp(*(const char**) a, *(const char **) b);
}

int main(){
  int n = 5;
  char* arr[100] = {"tygrysek", "panda", "krokodylek", "chomiczek", "papuga"};

  qsort(arr, n, sizeof(*arr), strcmp_wrapper);

  for(int i = 0; i < n; i++) printf("%s\n", arr[i]);

  return 0;
}
