#include <stdio.h>
int main(){
   int *nome[]={"Luan", "Noah", "Zayan"};
   for(int i=0; i<3; i++){
    printf("Nome: %s\n", nome[i]);
   }
  return 0;
}