#include <stdio.h>
#include <string.h>
#include <ctype.h>

#define MAX_LEN 200

void encontrar_letras_mais_frequentes(char *texto) {
    int frequencia[26] = {0};
    int max_freq = 0;
    
    for (int i = 0; texto[i] != '\0'; i++) {
        if ((texto[i] >= 'A' && texto[i] <= 'Z') || (texto[i] >= 'a' && texto[i] <= 'z')) {
            int indice = (texto[i] >= 'A' && texto[i] <= 'Z') ? texto[i] - 'A' : texto[i] - 'a';
            frequencia[indice]++;
            if (frequencia[indice] > max_freq) {
                max_freq = frequencia[indice];
            }
        }
    }
    
    for (int i = 0; i < 26; i++) {
        if (frequencia[i] == max_freq) {
            printf("%c", 'a' + i);
        }
    }
    printf("\n");
}

int main() {
    int N;
    char texto[MAX_LEN + 1];
    
    scanf("%d\n", &N);
    
    for (int i = 0; i < N; i++) {
        fgets(texto, MAX_LEN + 1, stdin);
        texto[strcspn(texto, "\n")] = '\0';
        encontrar_letras_mais_frequentes(texto);
    }
    
    return 0;
}