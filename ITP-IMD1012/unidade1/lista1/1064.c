#include <stdio.h>

int main() {
    float valor;
    float somaMedia = 0;
    int numerosPositivos = 0;
    
    for(int i = 0; i < 6; i++) {
        scanf("%f", &valor);
        
        if(valor > 0) {
            numerosPositivos++;
            somaMedia = somaMedia + valor;
        }
    }

    float media = somaMedia / numerosPositivos;
    float mediaArredondada = (int)(media * 10 + 0.9999) / 10.0;
    printf("%d valores positivos\n", numerosPositivos);
    printf("%.1f\n", mediaArredondada);
    return 0;
}
