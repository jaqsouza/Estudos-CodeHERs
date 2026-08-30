#include <stdio.h>

int main(void){
    int somaa;
    int somab;
    printf("Digite um número: ");
    scanf("%d", &somaa);
    printf("Digite outro número: ");
    scanf("%d", &somab);
    printf("A soma de %d + %d é igual a %d\n", somaa, somab, somaa+somab);

    return 0;
}
