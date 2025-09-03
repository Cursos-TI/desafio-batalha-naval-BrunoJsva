#include <stdio.h>

// Desafio Batalha Naval - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de Batalha Naval.
// Siga os comentários para implementar cada parte do desafio.

int main() {

    // Representação do tabuleiro
    int tabuleiro[10][10] = {0}; // Inicializa todas as posições com 0 (água)

    // Posicionamento dos navios
    int navioHorizontal[3] = {3, 3, 3}; // Navio horizontal de tamanho 3
    int navioVertical[3] = {3, 3, 3};   // Navio vertical de tamanho 3

    // Coordenadas iniciais dos navios
    int linhaNavioHorizontal = 2, colunaNavioHorizontal = 4; // Coordenadas iniciais do navio horizontal
    int linhaNavioVertical = 5, colunaNavioVertical = 7;     // Coordenadas iniciais do navio vertical

    // Posiciona o navio horizontal no tabuleiro
    for (int deslocamento = 0; deslocamento < 3; deslocamento++) {
        tabuleiro[linhaNavioHorizontal][colunaNavioHorizontal + deslocamento] = navioHorizontal[deslocamento];
    }

    // Posiciona o navio vertical no tabuleiro
    for (int deslocamento = 0; deslocamento < 3; deslocamento++) {
        tabuleiro[linhaNavioVertical + deslocamento][colunaNavioVertical] = navioVertical[deslocamento];
    }

    // Exibição do tabuleiro
    printf("*****************************************:\n");
    printf("************ BATALHA NAVAL **************\n");
    printf("*****************************************:\n");
    //Faz a montagem do tabuleiro
    for (int linha = 0; linha < 10; linha++) {
        for (int coluna = 0; coluna < 10; coluna++) {
            printf("%d ", tabuleiro[linha][coluna]);
        }
        printf("\n");
    }

    return 0;
}
