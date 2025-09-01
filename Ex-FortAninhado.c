#include <stdio.h>

int main() {
    // Loop aninhado para matriz 3x3
    for (int i = 0; i < 3; i++) { // Loop externo (linhas)
        printf("Linha %d: ", i);
        for (int j = 0; j < 2; j++) { // Loop interno (colunas)
            printf("(%d, %d) ", i, j);
        }
        printf("\n"); // Quebra de linha após cada linha da matriz
    }
    return 0;
}