#include <stdio.h>
#include <stdlib.h>

int main(){
  int a, b;
  scanf("%d %d", &a, &b);
  char buf[128];
  //snprintf(buf, 128, "%d*x - %d", a, b);
  //int len = sprintf(buf, "%d*x - %d", a, b);
  int len = sprintf(buf, "%d", a);
  b = atoi(buf);
  printf("%s i %d\n", buf, b);
  return 0;
}
