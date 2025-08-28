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
    while (Bispo <= 5) {
        //descrição de como a peça se movimentou
        printf("O Bispo Moveu Uma Casa para cima \n");
        printf("O Bispo Moveu Uma Casa para à direita \n");
        Bispo ++;
} 
    
    // Implementação de Movimentação da Torre
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Torre para a direita.
   // Pular linha

    printf("\n");
    //descrição indicando qual pessa ira se movimenta
    printf("Abaixo Movimentação da torre\n");
    // teste logico para movimanteção das peças e loop 
   for(Torre = 1; Torre <= 5; Torre ++)
    {
    //descrição de como a peça se movimentou
    printf("A Torre Moveu Uma Casa para à direita \n");
   }
    // Implementação de Movimentação da Rainha
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Rainha para a esquerda.
    //Pular linha
    printf("\n");
     //descrição indicando qual pessa ira se movimenta
    printf("Abaixo Movimentação da Rainha\n");
    // teste logico para movimanteção das peças e loop 

    do{ //descrição de como a peça se movimentou
        printf("A Rainha Moveu Uma Casa para à Esquerda \n"); 
                Rainha++; } while (Rainha <=8);
                
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
    // abaixo Loop aninhado
    while (cavalo --)
    {
        //segundo loop aninhado
        for (int i = 0; i < 2; i++)
        {
            printf("O cavalo Moveu Uma Casa para cima \n");
        }
        // teste logico para direção do cavalo
        switch (direcao_cavalo)
        {
            // primeira case impressão para esquerda
        case 'e':
        case 'E':
            printf("O cavalo Moveu Uma Casa para Esquerda. \n");
            break;
            // segunda case impressão para direita
        case 'd':
        case 'D':
            printf("O cavalo Moveu Uma Casa para Direita. \n");
            break;
        
        default:
        //mensagem caso o usuario digite alguma direção não dastrada
            printf("Codigo a ser executado se nenhum dos casos acima for verdadeiro\n");
            break;
        }
        
    }
    

    // Nível Mestre - Funções Recursivas e Loops Aninhados
    // Sugestão: Substitua as movimentações das peças por funções recursivas.
    // Exemplo: Crie uma função recursiva para o movimento do Bispo.

    // Sugestão: Implemente a movimentação do Cavalo utilizando loops com variáveis múltiplas e condições avançadas.
    // Inclua o uso de continue e break dentro dos loops.

    return 0;
}
