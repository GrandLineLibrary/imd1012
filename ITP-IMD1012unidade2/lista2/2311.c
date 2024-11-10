#include <stdio.h>

void SaltosOrnamentais(int N) {
    char nomes[N][100];
    float grau_dificuldade[N];
    float notas[N][7];
    
    for (int i = 0; i < N; i++) {
        scanf(" %[^\n]", nomes[i]);
        
        do {
            scanf("%f", &grau_dificuldade[i]);
        } while (grau_dificuldade[i] < 1.2 || grau_dificuldade[i] > 3.8);
        
        for (int j = 0; j < 7; j++) {
            scanf("%f", &notas[i][j]);
        }
    }
    
    for (int i = 0; i < N; i++) {
        int indice_maior = 0, indice_menor = 0;
        
        for (int j = 1; j < 7; j++) {
            if (notas[i][j] > notas[i][indice_maior]) {
                indice_maior = j;
            }
            if (notas[i][j] < notas[i][indice_menor]) {
                indice_menor = j;
            }
        }
        
        float soma = 0;
        for (int j = 0; j < 7; j++) {
            if (j != indice_maior && j != indice_menor) {
                soma += notas[i][j];
            }
        }
        
        float somaComPeso = soma * grau_dificuldade[i];
        printf("%s %.2f\n", nomes[i], somaComPeso);
    }
}

int main() {
    int numCompetidores;
    scanf("%d", &numCompetidores);
    SaltosOrnamentais(numCompetidores);
    return 0;
}