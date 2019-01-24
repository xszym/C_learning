#include <stdio.h>
#include <stdlib.h>

typedef struct{
  float x, y, z;
} Vector3D;

void *add(Vector3D *v1, Vector3D *v2, Vector3D *temp){
  temp->x = v1->x + v2->x;
  temp->y = v1->y + v2->y;
  temp->z = v1->z + v2->z;
}

void *sub(Vector3D *v1, Vector3D *v2, Vector3D *temp){
  temp->x = v1->x - v2->x;
  temp->y = v1->y - v2->y;
  temp->z = v1->z - v2->z;
}

int main(){
  Vector3D *v1 = malloc(sizeof(Vector3D)), *v2 = malloc(sizeof(Vector3D));
  v1->x = v1->y = v1->z = 2;
  v2->x = v2->y = v2->z = 1;

  Vector3D **arr = malloc(sizeof(Vector3D*) * 2);
  for(int i = 0; i < 2; ++i){
    arr[i] = malloc(sizeof(Vector3D));
  }

  add(v1, v2, arr[0]);
  printf("%f %f %f", arr[0]->x, arr[0]->y, arr[0]->z);

  return 0;
}
