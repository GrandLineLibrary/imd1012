#include <stdio.h>

int main() {
    int n;

    while (scanf("%d", &n) != EOF) {
        if (n < 5 || n > 101) break;

        int matriz[n][n];

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                matriz[i][j] = 0;
            }
        }

        for (int i = 0; i < n; i++) {
            matriz[i][i] = 2;
            matriz[i][n - i - 1] = 3;
        }

        int start = n / 3;
        int end = n - start;
        for (int i = start; i < end; i++) {
            for (int j = start; j < end; j++) {
                matriz[i][j] = 1;
            }
        }

        matriz[n / 2][n / 2] = 4;

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                printf("%d", matriz[i][j]);
            }
            printf("\n");
        }
        printf("\n");
    }

    return 0;
}