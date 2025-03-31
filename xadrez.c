#include <stdio.h>

// Função recursiva para movimentar a Torre
void moverTorre(int casas) {
    if (casas == 0) return;
    printf("Direita\n");
    moverTorre(casas - 1);
}

// Função recursiva para movimentar a Rainha
void moverRainha(int casas) {
    if (casas == 0) return;
    printf("Esquerda\n");
    moverRainha(casas - 1);
}

// Função recursiva para movimentar o Bispo
void moverBispoRecursivo(int casas) {
    if (casas == 0) return;
    printf("Cima e Direita\n");
    moverBispoRecursivo(casas - 1);
}

// Função com loops aninhados para movimentar o Bispo
void moverBispoLoop(int casas) {
    for (int i = 0; i < casas; i++) {
        for (int j = 0; j < 1; j++) {
            printf("Cima e Direita\n");
        }
    }
}

int main() {
    // Movimento da Torre (5 casas para a direita)
    printf("Movimento da Torre:\n");
    moverTorre(5);
    
    printf("\n");
    
    // Movimento do Bispo (5 casas na diagonal para cima e direita)
    printf("Movimento do Bispo (Recursivo):\n");
    moverBispoRecursivo(5);
    
    printf("\n");
    
    printf("Movimento do Bispo (Loops Aninhados):\n");
    moverBispoLoop(5);
    
    printf("\n");
    
    // Movimento da Rainha (8 casas para a esquerda)
    printf("Movimento da Rainha:\n");
    moverRainha(8);
    
    printf("\n");
    
    // Movimento do Cavalo (2 casas para cima, 1 para direita)
    printf("Movimento do Cavalo:\n");
    int movimentos_cima = 2;
    int movimentos_direita = 1;
    int i = 0, j = 0;
    
    // Loop externo controla o movimento para cima
    for (i = 0; i < movimentos_cima; i++) {
        printf("Cima\n");
    }
    
    // Loop interno controla o movimento para a direita
    i = 0;
    while (i < movimentos_direita) {
        printf("Direita\n");
        i++;
    }
    
    return 0;

}
