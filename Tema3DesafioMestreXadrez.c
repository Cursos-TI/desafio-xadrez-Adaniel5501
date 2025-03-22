#include <stdio.h>

// Funcao recursiva para a Torre (movimento para a direita)
void mover_torre(int casas) {
    if (casas == 0) return; // Para quando nao tem mais casas
    printf("%d - Direita.\n", 6 - casas);
    mover_torre(casas - 1);
}

// Funcao recursiva para a Rainha (movimento para a esquerda)
void mover_rainha(int casas) {
    if (casas == 0) return;
    printf("%d - Esquerda.\n", 9 - casas);
    mover_rainha(casas - 1);
}

// Funcao recursiva para o Bispo (movendo na diagonal)
void mover_bispo(int casas, int passo) {
    if (casas == 0) return;
    printf("%d - Diagonal.\n", passo);
    mover_bispo(casas - 1, passo + 1);
}

// Movimento do Cavalo com loops aninhados
void mover_cavalo(int saltos) {
    for (int i = 1; i <= saltos; i++) {
        printf("%d - Cima.\n", i * 2 - 1);
        printf("%d - Cima.\n", i * 2);
        printf("%d - Direita.\n", i);
    }
}

int main() {
    printf("Primeiro movimento: TORRE\n");
    mover_torre(5);
    printf("\n");
    
    printf("Proxima jogada: Movimento do BISPO\n");
    mover_bispo(5, 1);
    printf("\n");
    
    printf("Proxima jogada: Movimento da RAINHA\n");
    mover_rainha(8);
    printf("\n");
    
    printf("Proxima jogada: Movimento do CAVALO\n");
    mover_cavalo(2);
    
    return 0;
}