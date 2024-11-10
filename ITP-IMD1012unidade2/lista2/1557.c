#include <stdio.h>
#include <math.h>

int main() {
    int n;

    while (1) {
        scanf("%d", &n);
        if (n == 0) break;
        if (n > 15 || n < 0) break;

        int matriz[n][n];

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                matriz[i][j] = pow(2, i + j);
            }
        }

        int maior_valor = matriz[n - 1][n - 1];
        int max_digitos = 0;
        while (maior_valor > 0) {
            maior_valor /= 10;
            max_digitos++;
        }

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                if (j == 0) {
                    printf("%*d", max_digitos, matriz[i][j]);
                } else {
                    printf(" %*d", max_digitos, matriz[i][j]);
                }
            }
            printf("\n");
        }
        printf("\n");
    }

    return 0;
}