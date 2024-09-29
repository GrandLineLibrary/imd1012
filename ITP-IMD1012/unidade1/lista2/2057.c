#include <stdio.h>
 
int main() {
 
    int S, T, F;
    int horario = 0;
    
    scanf("%d %d %d", &S, &T, &F);
    
    if(S + T + F == 24){
        printf("0\n");
        return 0;
    }
    
    if(S + T + F > 24){
        horario = (S + T + F) % 24;
    }
    
    if(S + T + F < 0){
        horario = 24 + (S + T + F);
    }
    
    if(S + T + F <= 24 && S + T + F > 0) {
        horario = S + T + F;
    }
    
    printf("%d\n", horario);
    return 0;
}
