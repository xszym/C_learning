#include <stdio.h>
#include <stdarg.h>

/*
Input
5
65 84 25 644 2

Output
164 (average)
820 (sum)
2 (min)
644 (max)

Optional: Median, Mode, count of even elements etc.
*/

int main(){

  int n;
  scanf("%d", &n);

  /* ONE WAY
  //average, sum, min, max,
  int sum = 0;
  int min;
  int max = 0;

  for(int i = 0; i < n; i++){
    int x;
    scanf("%d", &x);
    sum += x;
    if(x < min) min = x;
    if(x > max) max = x;
  }
  */

  //OR ANOTHER
  int tablica[n];

  for(int i = 0; i < n; i++){
    int x;
    scanf("%d", &x);
    tablica[i] = x;
  }

  int sum = 0;
  int min = tablica[0];
  int max = 0;
  int evenCount = 0;
  for(int i = 0; i < n; i++){
    sum += tablica[i];
    if(tablica[i] < min) min = tablica[i];
    if(tablica[i] > max) max = tablica[i];
    if(!(tablica[i] % 2)) evenCount++;
  }

  printf("%d (average)\n", sum / n);
  printf("%d (sum)\n", sum);
  printf("%d (min)\n", min);
  printf("%d (max)\n", max);
  printf("%d (evenNumbers)\n", evenCount);
}
