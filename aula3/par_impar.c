#include <stdio.h>

int main(void){
    int a;

    printf("Digite um número inteiro: ");
    scanf("%d", &a);
    printf("Ira retornar 1 se ele for par e 0 se for ímpar\n");
    printf("%d\n", (a%2)==0);

    return 0;
}
