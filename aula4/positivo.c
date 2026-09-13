#include <stdio.h>

int main(void){
    int a;

    printf("Digite um número: ");
    scanf("%d", &a);

    if (a == 0){
        printf("Apenas 0?\n");
    }else if (a > 0){
        printf("Positivo\n");
    }else if (a < 0){
        printf("Negativo\n");
    }else {
        printf("Fale outro.\n");
    }

    return 0;
}
