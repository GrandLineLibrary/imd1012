#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);

    for (int i = 0; i < N; i++) {
        char sequencia[4];
        scanf("%s", sequencia);

        int digito1 = sequencia[0] - '0';
        char letra = sequencia[1];
        int digito2 = sequencia[2] - '0';

        if (digito1 == digito2) {
            printf("%d\n", digito1 * digito2);
        } else if (letra >= 'A' && letra <= 'Z') {
            printf("%d\n", digito2 - digito1);
        } else {
            printf("%d\n", digito1 + digito2);
        }
    }

    return 0;
}