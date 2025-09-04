#include <stdio.h>
#include <stdlib.h> // Bibiloteca adicional por conta do uso do abs

// Linha e coluna do cone
#define linha01 5
#define coluna01 (2 * linha01 -1)

//Linha do octaedro
#define linha03 7

// Linha de definição da cruz
#define linha02 5 

int main(){
printf("Área de ataque em formato de cone: \n");
    int matriz_cone[linha01][coluna01];

    // Initialize the matrix with zeros
    for (int i = 0; i < linha01; i++) {
        for (int j = 0; j < coluna01; j++) {
            matriz_cone[i][j] = 0;
        }
    }
    // A largura diminui com o aumento da linha (i)
    for (int i = 0; i < linha01; i++) {
        int n1 = coluna01 - (2 * i);
        if (n1 < 1) { 
            n1 = 1;
        }

        // Calcula os índices inicial e final para centralizar os elementos
        int indice_inicial01 = i;
        int indice_final01 = indice_inicial01 + n1;

        // Preencha a fatia da matriz com 1s
        for (int j = indice_inicial01; j < indice_final01; j++) {
            matriz_cone[i][j] = 1;
        }
    }

    // Impressão da matriz final
    printf("Área de ataque: \n");
    for (int i = 0; i < linha01; i++) {
        for (int j = 0; j < coluna01; j++) {
            printf("%d ", matriz_cone[i][j]);
        }
        printf("\n");
    }
//###########################################
printf("\n");
printf("Área de ataque em formato de cruz: \n");
int matriz_cruz[linha02][linha02];
    int indice_centro02 = linha02 / 2;

    // Inicializa com zero
    for (int i = 0; i < linha02; i++) {
        for (int j = 0; j < linha02; j++) {
            matriz_cruz[i][j] = 0;
        }
    }

    //Matriz preenchida para representar a cruz
    for (int i = 0; i < linha02; i++) {
        for (int j = 0; j < linha02; j++) {
            if (i == indice_centro02 || j == indice_centro02) {
                matriz_cruz[i][j] = 1;
            }
        }
    }

    // Impressão da matriz
    printf("Área de ataque: \n");
    for (int i = 0; i < linha02; i++) {
        for (int j = 0; j < linha02; j++) {
            printf("%d ", matriz_cruz[i][j]);
        }
        printf("\n");
    }
//###########################################
printf("\n");
printf("Área de ataque em formato de Octaedro: \n");
int matriz_octaedro[linha03][linha03];
    int indice_centro03 = linha03 / 2;

    // Inicialização com zero na matriz
    for (int i = 0; i < linha03; i++) {
        for (int j = 0; j < linha03; j++) {
            matriz_octaedro[i][j] = 0;
        }
    }

    // Matriz preenchida para formar o octaedro
    for (int i = 0; i < linha03; i++) {
        for (int j = 0; j < linha03; j++) {
                if (abs(i - indice_centro03) + abs(j - indice_centro03) <= indice_centro03) {// Verifica se os índice (i,j) estão dentro do losango
                matriz_octaedro[i][j] = 1;
            }
        }
    }

    // Impressão do Octaedro
    printf("Área de ataque: \n");
    for (int i = 0; i < linha03; i++) {
        for (int j = 0; j < linha03; j++) {
            printf("%d ", matriz_octaedro[i][j]);
        }
        printf("\n");
    }
    return 0;
}
