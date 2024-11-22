#include <stdio.h>
#include <string.h>
#include <ctype.h>

int eh_palindromo(char *texto) {
    int tamanho = strlen(texto);
    for (int i = 0; i < tamanho / 2; i++) {
        if (tolower(texto[i]) != tolower(texto[tamanho - i - 1])) {
            return 0;
        }
    }
    return 1;
}

int main() {
    char texto[201];

    fgets(texto, 201, stdin);
    texto[strcspn(texto, "\n")] = '\0';

    if (eh_palindromo(texto)) {
        printf("%s - Palindromo\n", texto);
    } else {
        printf("%s - Nao e Palindromo\n", texto);
    }

    return 0;
}
