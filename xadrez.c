#include <stdio.h>

    int main() {
        // Movimento da Torre (5 casas para a direita) usando for
        int casasTorre = 5;
        printf("Movimento da Torre:\n");
        for (int i = 0; i < casasTorre; i++) {
            printf("Direita\n");
        }
        
        // Movimento do Bispo (5 casas na diagonal para cima e à direita) usando while
        int casasBispo = 5;
        int j = 0;
        printf("\nMovimento do Bispo:\n");
        while (j < casasBispo) {
            printf("Cima Direita\n");
            j++;
        }
        
        // Movimento da Rainha (8 casas para a esquerda) usando do-while
        int casasRainha = 8;
        int k = 0;
        printf("\nMovimento da Rainha:\n");
        do {
            printf("Esquerda\n");
            k++;
        } while (k < casasRainha);
        
        return 0;
    }



