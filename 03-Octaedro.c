#include <stdio.h>
#include <stdlib.h> // Bibiloteca adicional por conta do uso do abs

#define linha03 7

int main() {
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
            // Check if the point (i, j) is within the rhombus boundaries
            // The condition is: |i - center| + |j - center| <= max_distance_from_center
            if (abs(i - indice_centro03) + abs(j - indice_centro03) <= indice_centro03) {
                matriz_octaedro[i][j] = 1;
            }
        }
    }

    // Impressão do Octaedro
    printf("Área de efeito em ocatedro: \n");
    for (int i = 0; i < linha03; i++) {
        for (int j = 0; j < linha03; j++) {
            printf("%d ", matriz_octaedro[i][j]);
        }
        printf("\n");
    }

    return 0;
}