#include <stdio.h>

float calcular_media(int notas[], int tamanho) {
    int soma = 0;
    for (int i = 0; i < tamanho; i++) {
        soma += notas[i];
    }
    return (float)soma / tamanho;
}

void verificar_aprovacao(int notas[], int tamanho) {
    float media = calcular_media(notas, tamanho);
    if (media >= 7) {
        printf("Aprovado\n");
    } else if (media >= 3) {
        int menor_nota = notas[0];
        int indice_menor = 0;
        for (int i = 1; i < tamanho; i++) {
            if (notas[i] < menor_nota) {
                menor_nota = notas[i];
                indice_menor = i;
            }
        }
        int nova_nota;
        scanf("%d", &nova_nota);
        notas[indice_menor] = nova_nota;
        media = calcular_media(notas, tamanho);
        if (media >= 7) {
            printf("Aprovado\n");
        } else {
            printf("Reprovado\n");
        }
    } else {
        printf("Reprovado\n");
    }
}

int main() {
    char nome[50];
    scanf("%49s", nome);
    int notas[3];
    scanf("%d %d %d", &notas[0], &notas[1], &notas[2]);

    verificar_aprovacao(notas, 3);

    return 0;
}