#include <stdio.h> 
int main() {
//Indicadores de base    
    int j=1;
    int k=1;
//Torre 5 casas para a direita
printf("Movimentação da torre:\n");
    for(int i=0; i<5; i++){
        printf("Direita\n");
    }
//Bispo 5 casas para a direita na diagonal
printf("     ");
printf("\nMovimentação do Bispo:\n");
    while(j<=5){
        printf("Cima, Direita\n");
    j++;
    }
//Rainha 8 casas para a esquerda
printf("\nMovimentação da Rainha\n");
    do{
        printf("Esquerda\n");
        k++;
    } while(k<=5);
return 0;
}