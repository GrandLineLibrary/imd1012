#include <stdio.h>

int main() {
    int n, m;
    scanf("%d %d", &n, &m);

    if (n < 3 || n > 1000 || m < 3 || m > 1000) {
        return 1;
    }

    int matriz[n][m];

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            scanf("%d", &matriz[i][j]);
        }
    }

    int sabreEncontrado = 0;
    int x = 0, y = 0;

    for (int i = 1; i < n - 1 && !sabreEncontrado; i++) {
        for (int j = 1; j < m - 1 && !sabreEncontrado; j++) {
            if (matriz[i][j] == 42) {
                if (matriz[i-1][j] == 7 && matriz[i+1][j] == 7 &&
                    matriz[i][j-1] == 7 && matriz[i][j+1] == 7 &&
                    matriz[i-1][j-1] == 7 && matriz[i-1][j+1] == 7 &&
                    matriz[i+1][j-1] == 7 && matriz[i+1][j+1] == 7) {
                    x = i + 1;
                    y = j + 1;
                    sabreEncontrado = 1;
                }
            }
        }
    }

    if (sabreEncontrado) {
        printf("%d %d\n", x, y);
    } else {
        printf("0 0\n");
    }

    return 0;
}