#include <stdio.h>
#include <stdlib.h>

void f(){
  FILE* file = NULL; //uchwyt

  if((file = fopen("test", "w+b")) == NULL){
    perror("Fopen failed");
    return 1;
  } else {
    int arr[10];
    //fwrite(arr, sizeof(int), 10, out); Pisanie z pliku
    fread(arr, sizeof(int), 10, file);
    for(int i = 0; i < 10; i++) ++arr[i];
    fwrite(arr, sizeof(int), 10, file);
    fclose(file);

    //Zmiana nazwy 0 to znaczy że się udało
    if(!rename("test", "test2")){
      printf("zmieniono nazwe");
    }

    remove("test");

  }
}

int main() {
  f();

  return 0;
}
