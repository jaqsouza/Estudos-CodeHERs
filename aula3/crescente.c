#include <stdio.h>

int main(void){
    int a;
    int b;
    int c;

    printf("Digite um número inteiro: ");
    scanf("%d", &a);
    printf("Digite outro inteiro: ");
    scanf("%d", &b);
    printf("Digite mais um número inteiro: ");
    scanf("%d", &c);
    printf("1 para ordem crescente e 0 para não.\n");
    printf("%d\n", (a < b && c) && b < c);

    return 0;
}
