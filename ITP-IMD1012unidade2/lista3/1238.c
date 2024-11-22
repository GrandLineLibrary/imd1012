#include <stdio.h>
#include <string.h>

int main() {
    int N;
    scanf("%d", &N);

    for (int i = 0; i < N; i++) {
        char s1[51], s2[51], resultado[101];
        scanf("%s %s", s1, s2);

        int z = 0, j = 0, k = 0;

        for (; s1[z] != '\0' && s2[j] != '\0'; z++, j++) {
            resultado[k++] = s1[z];
            resultado[k++] = s2[j];
        }

        for (; s1[z] != '\0'; z++) resultado[k++] = s1[z];
        for (; s2[j] != '\0'; j++) resultado[k++] = s2[j];

        resultado[k] = '\0';
        printf("%s\n", resultado);
    }

    return 0;
}