#include <stdio.h>
#include <string.h>
#include <ctype.h>


void vogais(const char *str, int *contagem_vogais) {
    while (*str) {
        char c = tolower(*str);
        if (c == 'a') {
            contagem_vogais[1]++;
          	contagem_vogais[0]++;
        } else if (c == 'e') {
            contagem_vogais[2]++;
            contagem_vogais[0]++;
        } else if (c == 'i') {
            contagem_vogais[3]++;
          	contagem_vogais[0]++;
        } else if (c == 'o') {
            contagem_vogais[4]++;
          	contagem_vogais[0]++;
        } else if (c == 'u') {
            contagem_vogais[5]++;
          	contagem_vogais[0]++;
        }
        str++;
    }
}


int main() {
    char str[100];
    int contagem_vogais[6] = {0};

    scanf("%s", str);

    vogais(str, contagem_vogais);

    printf("%d - %d - %d - %d - %d - %d\n", contagem_vogais[0], contagem_vogais[1], contagem_vogais[2], contagem_vogais[3], contagem_vogais[4], contagem_vogais[5]);
    return 0;
}