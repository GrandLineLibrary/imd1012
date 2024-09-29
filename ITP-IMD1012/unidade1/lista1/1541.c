#include <stdio.h>
#include <math.h>

int main() {
    int A, B, C;

    while (1) {
        scanf("%d %d %d", &A, &B, &C);
        if (A == 0) break;

        int areaCasa = A * B;
        double areaTerreno = (double)(areaCasa * 100) / C;
        int ladoTerreno = (int)sqrt(areaTerreno);

        printf("%d\n", ladoTerreno);
    }

    return 0;
}
