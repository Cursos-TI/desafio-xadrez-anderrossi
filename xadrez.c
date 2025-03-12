#include <stdio.h>

int main() {
    // Movimento do Cavalo: 2 casas para baixo, 1 casa para a esquerda
    printf("\nMovimento do Cavalo:\n");

    // Movimento para baixo (2 casas)
    for (int i = 0; i < 2; i++) {
        printf("Baixo\n");
    }

    // Movimento para a esquerda (1 casa)
    int j = 0;
    while (j < 1) {
        printf("Esquerda\n");
        j++;
    }

    return 0;
}