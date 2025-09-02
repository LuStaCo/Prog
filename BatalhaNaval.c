#include <stdio.h>
#define linha 10
#define coluna 10
#define navio 3
int main(){
    char letra;
    int camponavios[linha][coluna]={
        {3,0,0,0,0,0,0,0,0,0},
        {0,3,0,0,0,0,0,0,0,0},
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
             //camponavios[a][b] = a==b;
             if(camponavios[a][b] = a==b){
                printf("%d  ", camponavios[a][b]=3);
             } else{
                printf("%d  ", camponavios[a][b]=0);
             }
            //printf("%d ", camponavios[a][b]);                
        }   
        printf("\n");
    }
printf("\n");
return 0;
}

