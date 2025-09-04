#include <stdio.h>

#define linha02 5 // A matrix quadrada precisa ter um número ímpar para ter um centro exato

int main() {
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
            // A matriz representa a cruz preenchendo a linha central e a coluna central
            if (i == indice_centro02 || j == indice_centro02) {
                matriz_cruz[i][j] = 1;
            }
        }
    }

    // Impressão da matriz
    printf("Matriz que representa uma cruz:\n");
    for (int i = 0; i < linha02; i++) {
        for (int j = 0; j < linha02; j++) {
            printf("%d ", matriz_cruz[i][j]);
        }
        printf("\n");
    }
return 0;
}