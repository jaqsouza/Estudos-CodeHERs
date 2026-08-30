#include <stdio.h>

int main(void){
    double altura;
    double peso;

    printf("Qual a sua altura?: ");
    scanf("%lf", &altura);
    printf("Qual o seu peso?: ");
    scanf("%lf", &peso);
    printf("Seu IMC é: %.2f\n", peso/(altura*altura));

    return 0;
}
