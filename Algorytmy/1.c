#include <stdio.h>

int main(){
  int t;

  scanf("%d", &t);

  for(int x = 0; x < t; x++){
    //INPUT
    int n, k, m;
    scanf("%d%d%d", &n, &k, &m);
    int arr[n];
    for(int i = 0; i < n; i++)
      scanf("%d", &arr[x]);
    //CALCUATIONS
    for(int i = 0; i < n; i++){
      int max = 0;
      int count = 0;
      for(int j = i; j <= n + k -1; j++){
        if(max < arr[j]){
          max = arr[j];
          count++;
        }
      }
      if(n - k == count) printf("%d \n", 1);
      else printf("%d\n", 0);
    }


  }

  return 0;
}
