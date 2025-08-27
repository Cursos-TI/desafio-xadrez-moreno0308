#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

int main() {
    // Nível Novato - Movimentação das Peças
    // Sugestão: Declare variáveis constantes para representar o número de casas que cada peça pode se mover.
    int Torre = 1, Bispo = 1, Rainha = 1;
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

    // Nível Mestre - Funções Recursivas e Loops Aninhados
    // Sugestão: Substitua as movimentações das peças por funções recursivas.
    // Exemplo: Crie uma função recursiva para o movimento do Bispo.

    // Sugestão: Implemente a movimentação do Cavalo utilizando loops com variáveis múltiplas e condições avançadas.
    // Inclua o uso de continue e break dentro dos loops.

    return 0;
}
