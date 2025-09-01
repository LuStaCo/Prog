#include <stdio.h>

int main() {
    // Declara e inicializa a matriz
    int matriz[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    // Laços para percorrer a matriz e imprimir os elementos
    for (int i = 0; i < 3; i++) { // Loop para as linhas
        for (int j = 0; j < 3; j++) { // Loop para as colunas
            printf("%d ", matriz[i][j]);
        }
        printf("\n"); // Quebra de linha para a próxima linha da matriz
    }

    return 0;
}