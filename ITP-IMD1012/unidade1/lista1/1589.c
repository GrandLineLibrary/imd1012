#include <stdio.h>

int main() {
    int casosTeste;
    scanf("%d", &casosTeste);

    if (casosTeste > 10000) {
        return 0;
    }

    for (int i = 0; i < casosTeste; i++) {
        int R1;
        int R2;
        scanf("%d %d", &R1, &R2);
        
        int raio = R1 + R2;
        printf("%d\n", raio);
    }

    return 0;
}
