#include <stdio.h>

int main(void){
    int a;

    printf("Digite um número inteiro: ");
    scanf("%d", &a);
    printf("Ira aparecer 1 se positivo e 0 para negativo\n");
    printf("%d está no intervalo de [1, 100]?\n", a);
    printf("%d\n", a >= 1 && a <= 100);

    return 0;
}
