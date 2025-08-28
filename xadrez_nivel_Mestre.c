#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

// --- Funções Recursivas ---
// Função recursiva para simular o movimento da Torre.
// A cada chamada, a função imprime o movimento e se chama novamente
// para o próximo passo, decrementando o contador de casas.
void moverTorre(int casas) {
    // Caso base: a recursão para quando não há mais casas para mover.
    if (casas > 0) {
        printf("A Torre Moveu Uma Casa para a direita\n");
        // Chamada recursiva para o próximo movimento.
        moverTorre(casas - 1);
    }
}

// Função recursiva para simular o movimento da Rainha.
// Segue a mesma lógica da Torre, mas para a esquerda.
void moverRainha(int casas) {
    // Caso base: a recursão para quando não há mais casas para mover.
    if (casas > 0) {
        printf("A Rainha Moveu Uma Casa para a Esquerda\n");
        // Chamada recursiva para o próximo movimento.
        moverRainha(casas - 1);
    }
}

// Função recursiva e com loops aninhados para o movimento do Bispo.
// O loop externo controla o movimento vertical e o interno o horizontal,
// simulando a diagonal. A recursão garante que a função se chame novamente
// até que o número de casas seja zero.
void moverBispo(int casas) {
    if (casas > 0) {
        // Loop externo para o movimento vertical (para cima).
        for (int i = 0; i < 1; i++) {
            printf("O Bispo Moveu Uma Casa para cima\n");
            // Loop interno para o movimento horizontal (para a direita).
            for (int j = 0; j < 1; j++) {
                printf("O Bispo Moveu Uma Casa para a direita\n");
            }
        }
        // Chamada recursiva para o próximo movimento na diagonal.
        moverBispo(casas - 1);
    }
}

int main() {
    // Nível Novato - Movimentação das Peças
    // Sugestão: Declare variáveis constantes para representar o número de casas que cada peça pode se mover.
    int casas_torre = 5;
    int casas_bispo = 5;
    int casas_rainha = 8;
    int cavalo_movimentos = 1;
    char direcao_cavalo;
    
    // Implementação de Movimentação do Bispo
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação do Bispo em diagonal.
    //descrição indicando qual pessa ira se movimentar 
    printf("Abaixo Movimentação do Bispo\n");
     // teste logico para movimanteção das peças e loop 
    // --- Movimentação do Bispo (Recursividade e Loops Aninhados) ---
    printf("--- Movimentação do Bispo (Recursividade e Loops Aninhados) ---\n");
    moverBispo(casas_bispo);
    printf("\n");

    // Implementação de Movimentação da Torre
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Torre para a direita.
   // Pular linha

    printf("\n");
    //descrição indicando qual pessa ira se movimenta
    printf("Abaixo Movimentação da torre\n");
    // teste logico para movimanteção das peças e loop 
    // --- Movimentação da Torre (Recursividade) ---
    printf("--- Movimentação da Torre (Recursividade) ---\n");
    moverTorre(casas_torre);
    printf("\n");

    // Implementação de Movimentação da Rainha
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Rainha para a esquerda.
    //Pular linha
    printf("\n");
     //descrição indicando qual pessa ira se movimenta
    printf("Abaixo Movimentação da Rainha\n");
    // teste logico para movimanteção das peças e loop 
    // --- Movimentação da Rainha (Recursividade) ---
    printf("--- Movimentação da Rainha (Recursividade) ---\n");
    moverRainha(casas_rainha);
    printf("\n");

    // Nível Aventureiro - Movimentação do Cavalo
    // Sugestão: Utilize loops aninhados para simular a movimentação do Cavalo em L.
    // Um loop pode representar a movimentação horizontal e outro vertical.
    //Pular linha
    printf("\n");
    //Solicitação de entrada de dados para direção da peça Cavalo
    printf("Digite para qual direção o cavalor irá:\n");
    printf("E - Para Esqueda.\n");
    printf("D - Para Direita.\n");
    scanf("%c", &direcao_cavalo);
    printf("\n");
     //descrição indicando qual pessa ira se movimenta
    printf("Abaixo Movimentação do Cavalo\n");
    // Loop principal para o número total de movimentos do Cavalo.
    for (int i = 0; i < cavalo_movimentos; i++) {
        // Loop aninhado para as duas casas verticais (para cima).
        for (int vertical = 0; vertical < 2; vertical++) {
            printf("O cavalo Moveu Uma Casa para cima\n");
            
            // Condição para usar 'continue' e 'break'.
            // Exemplo: se for o primeiro movimento vertical (vertical == 0),
            // ele avança para o próximo, simulando o L.
            if (vertical == 0) {
                continue; // Continua para a próxima iteração do loop vertical.
            }
        }
        
        // Movimento horizontal de uma casa (para a direita).
        printf("O cavalo Moveu Uma Casa para a direita\n");

        // Condição de 'break' para sair do loop, se necessário.
        if (i == 0) {
            break; // Sai do loop principal após o primeiro movimento "L".
        }
    }
    printf("\n");

    // Nível Mestre - Funções Recursivas e Loops Aninhados
    // Sugestão: Substitua as movimentações das peças por funções recursivas.
    // Exemplo: Crie uma função recursiva para o movimento do Bispo.

    // Sugestão: Implemente a movimentação do Cavalo utilizando loops com variáveis múltiplas e condições avançadas.
    // Inclua o uso de continue e break dentro dos loops.

    return 0;
}
