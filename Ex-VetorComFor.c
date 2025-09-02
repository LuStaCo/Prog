#include <stdio.h>
int main(){
int vetor[5];
int soma=0;
    for(int i=0; i<5; i++){
        soma+=vetor[i];
    }
    printf("A soma dos vetores é de: %d:", soma);  
return 0;
}