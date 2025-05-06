#include <stdio.h>

// Desafio Batalha Naval - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de Batalha Naval.
// Siga os comentários para implementar cada parte do desafio.

//Nível Mestre (começo)
#define LINHAS 10
#define COLUNAS 10

// Função para exibir o tabuleiro
void exibirTabuleiro(int tabuleiro[LINHAS][COLUNAS]) {
    printf("\n JOGO BATALHA NAVAL (Mestre)\n");
    printf("   ");
    for (char letra = 'A'; letra < 'K'; letra++) {
        printf("%c ", letra);
    }
    printf("\n");
    for (int i = 0; i < LINHAS; i++) {
        printf("%-2d ", i + 1);
        for (int j = 0; j < COLUNAS; j++) {
            printf("%d ", tabuleiro[i][j]);
        }
        printf("\n");
    }
}

// Função para sobrepor matriz de habilidade ao tabuleiro
void aplicarHabilidade(int tabuleiro[LINHAS][COLUNAS], int matriz[5][5], int X, int Y) {
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            int x = X + i - 2;
            int y = Y + j - 2;
            if (x >= 0 && x < LINHAS && y >= 0 && y < COLUNAS && matriz[i][j] == 1) { //Evita acessar posições inválidas fora do tabuleiro.
                tabuleiro[x][y] = 5; //Substitui o valor no tabuleiro, representando a área afetada
            }
        }
    }
}

// Definição das matrizes de habilidades
void definirMatrizes(int cone[5][5]) {
    // Matriz Cone
    int tempCone[5][5] = {
        {0, 0, 1, 0, 0},
        {0, 1, 1, 1, 0},
        {1, 1, 1, 1, 1},
        {0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0}
    };
    
    // Copiando valores para as matrizes reais
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            cone[i][j] = tempCone[i][j];
        }
    }
}
//continuação na linha 168

int main() {
    // Nível Novato - Posicionamento dos Navios
    // Sugestão: Declare uma matriz bidimensional para representar o tabuleiro (Ex: int tabuleiro[5][5];).
    // Sugestão: Posicione dois navios no tabuleiro, um verticalmente e outro horizontalmente.
    // Sugestão: Utilize `printf` para exibir as coordenadas de cada parte dos navios.

#define linhas 11 //Tem que ser 11 pois i é = 1 e vai até 10
#define colunas 10

    int tabela [linhas][colunas]={ 
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
        {0, 0, 3, 3, 3, 0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0, 0, 0, 0, 3, 0},
        {0, 0, 0, 0, 0, 0, 0, 0, 3, 0},
        {0, 0, 0, 0, 0, 0, 0, 0, 3, 0},
        }; //Única forma que encontrei de fazer o código funcionar, pois o professor não ensinou outras formas
    
        printf("\n JOGO BTALHA NAVAL (Novato)\n");

        printf("   "); //Alinha as letras com os números da tabela
        for (char letra = 'A'; letra < 'K'; letra++)
        {
            printf("%c ", letra); //Saída das letras
        }
        printf("\n"); //Quebra a linha entre as letras e a tabela

    
        for (int i = 1; i < linhas; i++)
        {
            printf("%-2d ", i); //Saída dos números laterais

                for (int j = 0; j < colunas; j++)
                {
                    printf("%d ", tabela[i][j]); //Saída da tabela
                }

            printf("\n");
        }
    

    // Nível Aventureiro - Expansão do Tabuleiro e Posicionamento Diagonal
    // Sugestão: Expanda o tabuleiro para uma matriz 10x10.
    // Sugestão: Posicione quatro navios no tabuleiro, incluindo dois na diagonal.
    // Sugestão: Exiba o tabuleiro completo no console, mostrando 0 para posições vazias e 3 para posições ocupadas.

#define linhas2 11 //Tem que ser 11 pois i é = 1 e vai até 10
#define colunas2 11

    //A tabela teve que ser uma 11x11 pois a 10x10 estava apresentando muitos erros, mas na impressão para o usuário é imprimida uma tabela 10x10.
    int tabela2 [linhas2][colunas2] = { 
        {3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, 
        {0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0},
        {0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0},
        {0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0},
        {0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0},
        {0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0}
    }; //Única forma que encontrei de fazer o código funcionar, pois o professor não ensinou outras formas.
    
        printf("\n JOGO BTALHA NAVAL (Aventreiro)\n");

        printf("   "); //Alinha as letras com os números da tabela
        for (char letra = 'A'; letra < 'K'; letra++){
            printf("%c ", letra); //Saída das letras
        }
        printf("\n"); //Quebra a linha entre as letras e a tabela
    
        for (int i = 1; i < linhas2; i++){
            printf("%-2d ", i); //Saída dos números laterais
            for (int j = 1; j < colunas2; j++){
                    printf("%d ", tabela2[i][j]); //Saída da tabela
            }
            printf("\n");
        }

    // Nível Mestre - Habilidades Especiais com Matrizes
    // Sugestão: Crie matrizes para representar habilidades especiais como cone, cruz, e octaedro.
    // Sugestão: Utilize estruturas de repetição aninhadas para preencher as áreas afetadas por essas habilidades no tabuleiro.
    // Sugestão: Exiba o tabuleiro com as áreas afetadas, utilizando 0 para áreas não afetadas e 1 para áreas atingidas.

    int tabuleiro[LINHAS][COLUNAS] = {0};
    int cone[5][5];
    definirMatrizes(cone);

    // Adicionando navios ao tabuleiro
    tabuleiro[4][4] = 3;
    tabuleiro[5][5] = 3;
    tabuleiro[6][6] = 3;

    // Aplicar habilidades em diferentes pontos de origem
    aplicarHabilidade(tabuleiro, cone, 3, 3);
    
    // Exibir tabuleiro final
    exibirTabuleiro(tabuleiro);

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

    return 0;
}
