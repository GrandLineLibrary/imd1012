#include <stdio.h>

int main() {
    int reclamacao;

    while (scanf("%d", &reclamacao) != EOF) {
        if (reclamacao >= 1) {
            printf("vai ter duas!\n");
        } else {
            printf("vai ter copa!\n");
        }
    }

    return 0;
}
