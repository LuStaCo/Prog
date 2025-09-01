#include <stdio.h>
int main(){
    //Valor 0 simbolizando a água nos vetores
    int campoinicial[10][10]={ 
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
    //Valor 3 simbolizando os navios ao redor do 0(água)
     int camponavios[10][10]={
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
    printf("#### Campo de batalha inicial ####\n");
    for(int i=0; i<10; i++){ //Responsável pelas linhas da matriz
        for(int j=0; j<10; j++){ //Responsável pelas colunas da matriz
            printf("%d  ", campoinicial[i][j]);
        }
        printf("\n");
    }
    printf("\n#### Navios posicionados ####\n");
    for(int a=0; a<10; a++){
        for(int b=0; b<10; b++){
            printf("%d  ", camponavios[a][b]);
        }
        printf("\n");
    }
return 0;
}

