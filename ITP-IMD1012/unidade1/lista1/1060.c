#include <stdio.h>

int main() {
    float valor;
    int numerosPositivos = 0;
    for(int i = 0; i < 6; i++) {
        scanf("%f", &valor);
        
        if(valor > 0) {
            numerosPositivos++;
        }
    }

    printf("%d valores positivos\n", numerosPositivos);

    return 0;
}
