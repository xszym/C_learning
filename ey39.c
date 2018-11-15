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
  int array[n];

  for(int i = 0; i < n; i++){
    int x;
    scanf("%d", &x);
    array[i] = x;
  }

  int sum = 0;
  int min = array[0];
  int max = 0;
  int evenCount = 0;
  for(int i = 0; i < n; i++){
    sum += array[i];
    if(array[i] < min) min = array[i];
    if(array[i] > max) max = array[i];
    if(!(array[i] % 2)) evenCount++;
  }

  printf("%d (average)\n", sum / n);
  printf("%d (sum)\n", sum);
  printf("%d (min)\n", min);
  printf("%d (max)\n", max);
  printf("%d (evenNumbers)\n", evenCount);

  //PRINT ELEMENT ONLY ONE TIME
  for(int i = 0; i < n; i++){
    for(int j = 0; j < i; j++)
      if(array[j] == array[i]) goto end;
    printf("%d, ", array[i]);
    end:;
  }

  //BUBBLE SORT XD
  for(int i = 0; i < n; i++){
    for(int j = 0; j < n - 1; j++){
      if(array[j] > array[j + 1]){
        int temp = array[j + 1];
        array[j + 1] = array[j];
        array[j] = temp;
      }
    }
  }

  //MEDIANA
  printf("\nmediana: %f", n%2 ? array[n/2] : ((float) array[n/2 - 1] + array[n/2]) / 2);

  //PRINT elements
  for(int i = 0; i < n; i++)
    printf("\n%d = %d, ", i, array[i]);
}
