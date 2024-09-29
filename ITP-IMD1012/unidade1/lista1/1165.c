#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);
    
    for (int i = 0; i < N; i++) {
        int X;
        scanf("%d", &X);
        int divisores = 0;

        if (X <= 1) {
            printf("%d nao eh primo\n", X);
            continue;
        }

        for (int j = 2; j * j <= X; j++) {
            if (X % j == 0) {
                divisores++;
                break;
            }
        }

        if (divisores == 0) {
            printf("%d eh primo\n", X);
        } else {
            printf("%d nao eh primo\n", X);
        }
    }
    
    return 0;
}
