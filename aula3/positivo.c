#include <stdio.h>

int main(void){
    int a;
    int b;

    printf("Digite um número inteiro: ");
    scanf("%d", &a);
    printf("Digite outro número inteiro: ");
    scanf("%d", &b);
    printf("Ira aparecer 1 se positivo e 0 para negativo\n");
    printf("%d é maior que %d?\n", a, b);
    printf("%d\n", a > b);

    return 0;
}
