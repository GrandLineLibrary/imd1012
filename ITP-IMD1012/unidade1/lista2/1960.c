#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);

    while (N >= 1000) { printf("M"); N -= 1000; }
    while (N >= 900) { printf("CM"); N -= 900; }
    while (N >= 500) { printf("D"); N -= 500; }
    while (N >= 400) { printf("CD"); N -= 400; }
    while (N >= 100) { printf("C"); N -= 100; }
    while (N >= 90) { printf("XC"); N -= 90; }
    while (N >= 50) { printf("L"); N -= 50; }
    while (N >= 40) { printf("XL"); N -= 40; }
    while (N >= 10) { printf("X"); N -= 10; }
    while (N >= 9) { printf("IX"); N -= 9; }
    while (N >= 5) { printf("V"); N -= 5; }
    while (N >= 4) { printf("IV"); N -= 4; }
    while (N >= 1) { printf("I"); N -= 1; }

    printf("\n");
    return 0;
}
