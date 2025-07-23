#include <stdio.h>
int main(){
    char coluna[10] = {'A','B','C','D','E','F','G','H','I','J'};
    char *linha[] = {"1", "2", "3", "4", "5", "6", "7", "8", "9", "10"};
    int tabuleiro[10][10];
    printf("     Tabuleiro Batalha Naval\n");
    printf("    "); // espaço para iniciar o cabeçalho das colunas
    for(int i = 0; i < 10; i++){
        printf("%-3c",coluna[i]);
    }
    printf("\n");
    for(int i = 0; i < 10; i++){
        printf("%-3s", linha[i]);
        for(int j = 0; j < 10; j++){
            tabuleiro[i][j] = 0;
            printf(" 0 ");
            
        }
        printf("\n");
    }
    printf("\n");
    printf("    *** Nível Novato***\n");
    // Navio_1 com 3 células na vertical atribuídas com o 3.
    int navio1[3][1] = {{3}, {3}, {3}}; // representa o navio ocupando 3 linhas e 1 coluna
    for(int i = 4; i < 7; i++){// posiciona o navio na linha
        for(int j = 3; j < 4; j++){// posiciona o navio na coluna
            tabuleiro[i][j] = 3;
            printf("navio1[%d] [%d]\n", i, j); // Exibir a posição do navio

        }
    }
     // Navio_2 com 3 células na horizontal atribuídas com o 3.
     int navio2[1][3] = {{3, 3, 3}}; // representa o navio ocupando 3 colunas e 1 linha

    for(int i = 7; i < 8; i++){// posiciona o navio na linha
        for(int j = 6; j < 9; j++){// posiciona o navio na coluna
            tabuleiro[i][j] = 3;
            printf("navio2[%d] [%d]\n", i, j); // Exibir a posição do navio

        }
    }
    printf("\n");
    // atualiza o tabuleiro 
    
    printf("       Tabuleiro com Navios\n");
    printf("   "); // espaço para iniciar o cabeçalho das colunas
    for(int i = 0; i < 10; i++){
        printf("%-3c",coluna[i]);
    }
    printf("\n");
    for(int i = 0; i < 10; i++){
        printf("%-3s", linha[i]);
        for(int j = 0; j < 10; j++){
            printf("%-3d", tabuleiro[i][j]);
            
        }
        printf("\n");
    }
    // limpa o tabuleiro antes dos navios do nível aventureiro
    for(int i = 0; i < 10; i++){
        for(int j = 0; j < 10; j++){
            tabuleiro[i][j] = 0;
        }
    }

























/*#include <stdio.h>

// Desafio Batalha Naval - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de Batalha Naval.
// Siga os comentários para implementar cada parte do desafio.

int main() {
    // Nível Novato - Posicionamento dos Navios
    // Sugestão: Declare uma matriz bidimensional para representar o tabuleiro (Ex: int tabuleiro[5][5];).
    // Sugestão: Posicione dois navios no tabuleiro, um verticalmente e outro horizontalmente.
    // Sugestão: Utilize `printf` para exibir as coordenadas de cada parte dos navios.

    // Nível Aventureiro - Expansão do Tabuleiro e Posicionamento Diagonal
    // Sugestão: Expanda o tabuleiro para uma matriz 10x10.
    // Sugestão: Posicione quatro navios no tabuleiro, incluindo dois na diagonal.
    // Sugestão: Exiba o tabuleiro completo no console, mostrando 0 para posições vazias e 3 para posições ocupadas.

    // Nível Mestre - Habilidades Especiais com Matrizes
    // Sugestão: Crie matrizes para representar habilidades especiais como cone, cruz, e octaedro.
    // Sugestão: Utilize estruturas de repetição aninhadas para preencher as áreas afetadas por essas habilidades no tabuleiro.
    // Sugestão: Exiba o tabuleiro com as áreas afetadas, utilizando 0 para áreas não afetadas e 1 para áreas atingidas.

    // Exemplos de exibição das habilidades:
    // Exemplo para habilidade em cone:
    // 0 0 1 0 0
    // 0 1 1 1 0
    // 1 1 1 1 1
    
    // Exemplo para habilidade em octaedro:
    // 0 0 1 0 0
    // 0 1 1 1 0
    // 0 0 1 0 0

    // Exemplo para habilidade em cruz:
    // 0 0 1 0 0
    // 1 1 1 1 1
    // 0 0 1 0 0
*/
    return 0;
}
