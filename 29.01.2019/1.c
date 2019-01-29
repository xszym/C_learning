#include <stdio.h>
#include <stdlib.h>

typedef struct Node{
  void *data;
  struct Node *next;
} NodeElement;

//memcpy dla bajtów !!!! w string.h
//wskaźniki na funkcje
//operacje na wskaźnikach
//

void push(NodeElement **head_ref, void *new_data, size_t data_size) {
  NodeElement *new_node = malloc(sizeof(NodeElement)); //alokacja pamieci dla nowego wezla
  new_node->data = malloc(data_size); //alokacja pamięci dla danych
  new_node->next = (*head_ref); //łączenie z poprzednim węzłem
  for(int i = 0; i < data_size; ++i)
    *(char *) (new_node->data + i) = *(char *)(new_data + i); //kopiowanie bajt po bajcie do struktury (memcpy)
  (*head_ref) = new_node;//przepinanie wskaźnika
}

void printList(NodeElement *node, void (*fptr)(void *)){
  while(node != NULL){
    (*fptr)(node->data);
    node = node->next;
  }
}

void printInt(void *data){
  printf("%d\n", *(int *)data);
}

void printFloat(void *data){
  printf("%f\n", *(float *)data);
}

void printChar(void *data){
  printf("%c\n", *(char *)data);
}

int main() {
  NodeElement *start = NULL;
  int arr[] = {1, 2, 3, 4, 5 ,6, 7, 8};
  for(int i = 7; i >= 0; --i)
    push(&start, &arr[i], sizeof(int));

  printList(start, printInt);
  printf("%p\n", start);
  float data = 4.f;
  push(&start, &data, sizeof(float));

  return 0;
}
