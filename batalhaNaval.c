#include <stdio.h>

// Desafio Batalha Naval - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de Batalha Naval.
// Siga os comentários para implementar cada parte do desafio.

int main() {

    // Representação do tabuleiro
    int tabuleiro[10][10] = {0}; // Inicializa todas as posições com 0 (água)

    // Posicionamento dos navios nível Novato
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

    // Posicionamento dos navios adicionais nível Aventureiro
    int navioDiagonalPrincipal[3] = {3, 3, 3}; // Navio diagonal de tamanho 3
    int navioDiagonal2[3] = {3, 3, 3}; // Outro navio diagonal de tamanho 3

    // Coordenadas iniciais dos navios diagonais
    int linhanavioDiagonalPrincipal = 1, colunanavioDiagonalPrincipal = 1; // Coordenadas iniciais do primeiro navio diagonal
    int navioDiagonalSecundaria = 7, colunaDiagonalSecundaria = 7; // Coordenadas iniciais do segundo navio diagonal

    // Posiciona o primeiro navio diagonal no tabuleiro
    for (int deslocamento = 0; deslocamento < 3; deslocamento++) {
        tabuleiro[linhanavioDiagonalPrincipal + deslocamento][colunanavioDiagonalPrincipal + deslocamento] = navioDiagonalPrincipal[deslocamento];
    }

    // Posiciona o segundo navio diagonal no tabuleiro
    for (int deslocamento = 0; deslocamento < 3; deslocamento++) {
        tabuleiro[navioDiagonalSecundaria - deslocamento][colunaDiagonalSecundaria - deslocamento] = navioDiagonal2[deslocamento];
    }
    printf("**********************\n");
    printf("*** BATALHA NAVAL ****\n");
    printf("**********************\n");
    // Exibição do tabuleiro com números e letras
    printf("   A B C D E F G H I J\n"); // Letras na horizontal
    for (int linha = 0; linha < 10; linha++) {
        printf("%2d ", linha + 1); // Números na vertical
        for (int coluna = 0; coluna < 10; coluna++) {
            printf("%d ", tabuleiro[linha][coluna]);
        }
        printf("\n");
    }

    return 0;
}
