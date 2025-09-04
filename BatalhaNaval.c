#include <stdio.h>
#define linha 10
#define coluna 10
int main(){
    int matriz[linha][coluna]={
        {0,0,0,0,0,0,0,0,0,0},
        {0,0,0,0,0,0,0,0,0,0},
        {0,0,0,0,0,0,0,0,0,0},
        {0,0,0,0,0,0,0,0,0,0},
        {0,0,0,0,0,0,0,0,0,0},
        {0,0,0,0,0,0,0,0,0,0},
        {0,0,0,0,0,0,0,0,0,0},
        {0,0,0,0,0,0,0,0,0,0},
        {0,0,0,0,0,0,0,0,0,0},
        {0,0,0,0,0,0,0,0,0,0}
    };
 
    printf("\n#### Navios posicionados ####\n");
    printf("\n");
    for(int a=0; a<linha; a++){ //Imprime os números das linhas
        for(int b=0; b<coluna; b++){//Imprime os números das colunas
            if(a==b){
                printf("%d  ", matriz[a][b]=3);
            } else{
                printf("%d  ", matriz[a][b]=0);                
            }
        }   
        printf("\n");
    }
printf("\n");
return 0;
}

