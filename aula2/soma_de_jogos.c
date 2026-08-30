#include <stdio.h>

int main(void){
    int a;
    int b;

    printf("Quantos jogos você tem na steam?: ");
    scanf("%d", &a);
    printf("Quantos jogos sua amiga tem na steam?: ");
    scanf("%d", &b);
    printf("Juntas você possuem %d jogos na família steam.\n", a+b);

    return 0;
}
