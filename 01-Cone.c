#include <stdio.h>

#define linha01 5
#define coluna01 (2 * linha01 -1)

int main() {
    int matriz_cone[linha01][coluna01];

    // Initialize the matrix with zeros
    for (int i = 0; i < linha01; i++) {
        for (int j = 0; j < coluna01; j++) {
            matriz_cone[i][j] = 0;
        }
    }
    // A largura diminui com o aumento da linha (i)
    for (int i = 0; i < linha01; i++) {
        // Calcula o número de elementos para a linha atual
        int n1 = coluna01 - (2 * i);
        if (n1 < 1) { // Garanta pelo menos um elemento para a dica
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
    printf("Matriz que representa um cone invertido:\n");
    for (int i = 0; i < linha01; i++) {
        for (int j = 0; j < coluna01; j++) {
            printf("%d ", matriz_cone[i][j]);
        }
        printf("\n");
    }
    return 0;
}