#include <stdio.h>

int main(void){
    double a;

    printf("Qual é o seu salário atual?: ");
    scanf("%lf", &a);

    if (a <= 1500){
        printf("Você recebera R$: %.2f\n", a*1.15);
    }else if (a > 1500){
        printf("Você recebera R$: %.2f\n", a*1.10);
    } else{
        printf("Não tenho informações\n");
    }

    return 0;
}
