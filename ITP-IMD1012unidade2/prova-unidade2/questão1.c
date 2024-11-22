#include <stdio.h>
#include <stdlib.h>

void soma(float matriz[5][5]) {
    float soma = 0.0;
    for (int coluna = 0; coluna < 4; coluna++) {
        for (int linha = coluna + 1; linha < 5; linha++) {
            soma += matriz[linha][coluna];
        }
    }
    printf("%.2f\n", soma);
}

void multiplicacao(float matriz[5][5]) {
    double multiplicacao = 1.0;
    for (int coluna = 0; coluna < 4; coluna++) {
        for (int linha = coluna + 1; linha < 5; linha++) {
            multiplicacao *= matriz[linha][coluna];
        }
    }
    printf("%.2lf\n", multiplicacao);
}

int main() {
    float matriz[5][5];
    char operacao;

    srand(42);
    // aqui eu gero numero aleatorios pra matriz
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            matriz[i][j] = ((rand() % 99) + 1) / 10.0;
        }
    }

    printf("Matriz gerada:\n");
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            printf("%.1f ", matriz[i][j]);
        }
        printf("\n");
    }

    scanf(" %c", &operacao);
    if (operacao == 'S') {
        soma(matriz);
    } else if (operacao == 'M') {
        multiplicacao(matriz);
    }

    return 0;
}