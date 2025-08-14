#include <stdio.h>

int main() {
    // Definição das constantes para o número de casas a serem movidas
    const int CASAS_TORRE = 5;      // Torre move 5 casas para a direita
    const int CASAS_BISPO = 5;      // Bispo move 5 casas na diagonal (cima e direita)
    const int CASAS_RAINHA = 8;     // Rainha move 8 casas para a esquerda
    
    // Variáveis de controle para os loops
    int i;                          // Contador para loop for (Torre)
    int movimento_bispo = 0;        // Contador para loop while (Bispo)
    int movimento_rainha = 0;       // Contador para loop do-while (Rainha)
    
    printf("=== SIMULACAO DE MOVIMENTO DAS PECAS DE XADREZ ===\n\n");
    
    // TORRE - Movimento horizontal para a direita usando loop FOR
    printf("TORRE - Movendo %d casas para a direita:\n", CASAS_TORRE);
    printf("Posicao inicial da Torre\n");
    
    for (i = 1; i <= CASAS_TORRE; i++) {
        printf("Direita\n");
    }
    printf("Torre finalizou o movimento!\n\n");
    
    // BISPO - Movimento diagonal (cima e direita) usando loop WHILE
    printf("BISPO - Movendo %d casas na diagonal (cima e direita):\n", CASAS_BISPO);
    printf("Posicao inicial do Bispo\n");
    
    while (movimento_bispo < CASAS_BISPO) {
        printf("Cima Direita\n");
        movimento_bispo++;
    }
    printf("Bispo finalizou o movimento!\n\n");
    
    // RAINHA - Movimento horizontal para a esquerda usando loop DO-WHILE
    printf("RAINHA - Movendo %d casas para a esquerda:\n", CASAS_RAINHA);
    printf("Posicao inicial da Rainha\n");
    
    do {
        printf("Esquerda\n");
        movimento_rainha++;
    } while (movimento_rainha < CASAS_RAINHA);
    printf("Rainha finalizou o movimento!\n\n");
    
    printf("=== SIMULACAO CONCLUIDA ===\n");
    
    return 0;
}