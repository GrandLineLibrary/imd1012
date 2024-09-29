#include <stdio.h>

int main() {
    int a;
    int b;
    int q;
    int r;
    
    scanf("%d %d", &a, &b);

    if (b == 0) {
        printf("Erro: Divisão por zero\n");
        return 0;
    }

    q = a / b;
    r = a % b;

    if (r < 0) {
        if (b > 0) {
            r += b;
            q -= 1;
        } else {
            r -= b;
            q += 1;
        }
    }

    printf("%d %d\n", q, r);

    return 0;
}
