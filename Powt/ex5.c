#include <stdio.h>

void f(float values[], int n_v,  int ids[], int n_i){
  for(int i = 0; i < n_i, i++){
    printf("%f\n",ids[i] >=0 && ids[i] < 0 ? values[ids[i]] : 0.0f);
  }
}

int main(){
  int k, temp, n = 15;

  float arr[n] = {1.f, 2.f, 3.f,1.f, 2.f, 3.f,1.f, 2.f, 3.f,1.f, 2.f, 3.f,1.f, 2.f, 3.f};

  scanf("%d", &k);

  while(k--){
    scanf("%d", &temp);
    printf("%f\n", temp >=0 && temp < n ? arr[temp] : 0.f);
  }

  return 0;
}
