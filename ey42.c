#include <stdio.h>

int main(){

  int n, k, m;

  scanf("%d", &n); //distance to travel
  scanf("%d", &k); //max km per day
  scanf("%d", &m); //numbers of motels

  int arr[m + 1];

  for(int i = 0; i < m; i++) scanf("%d", &arr[i]);

  arr[m] = n;
  int lastStop = 0;
  int stops = 0;


  for(int i = 0; i < m; i++){

      if(arr[i + 1] - arr[i] > k){
        printf("NIE");
        //printf(" Errror at %d i %d\n", arr[i], arr[i + 1]);
        return 0;
      }

      if(n - lastStop < k){
          //printf("DONE");
         break;
      }

      if(arr[i] - lastStop <= k && arr[i + 1] - lastStop > k){
        lastStop = arr[i];
        stops++;
        //printf("stop at: %d\n", arr[i]);
      }
  }

  printf("%d\n", stops);

  return 0;
}
