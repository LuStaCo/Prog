#include <stdio.h> 
//Recursividade Torre
void movetorre(int casa01){
    if(casa01>0){
        movetorre(casa01-1);
        printf("%d casas à direita.\n", casa01);
    }
}
//Recursividade Bispo
void movebispo(int casa02){
    for(int i=0; i<6; i++){
        if(i>0 && i<6){
            printf("Cima, diagonal;");
        }
        printf("\n");
    }
}
//Recursividade Rainha
void moverainha(int casa03){
    if(casa03>0){
        moverainha(casa03-1);
        printf("%d casas à esquerda.\n", casa03);
    }
}
int main() {
//Movimento total de cada peça    
    int pçtorre=5;
    int pçbispo=5;
    int pçrainha=8;
printf("#### Movimentação da torre ####\n");
    movetorre(pçtorre);
    
printf("\n#### Movimentação do bispo ####");
    movebispo(pçbispo);

printf("\n#### Movimentação da rainha ####\n");
    moverainha(pçrainha);

printf("\n#### Movimentação do cavalo ####\n");
    int i = 1;
    do {
        printf("Cima, externo.\n", i);
        i++;
    } while (i < 3);
    printf("Direita, horizontal.\n");
   
return 0;
}