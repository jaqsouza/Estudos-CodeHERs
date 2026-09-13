#include <stdio.h>

int main(void){
    double altura;
    double peso;

    printf("Qual a sua altura?: ");
    scanf("%lf", &altura);
    printf("Qual o seu peso?: ");
    scanf("%lf", &peso);
    printf("Seu IMC é: %.2f\n", peso/(altura*altura));

    int imc = peso/(altura*altura);

    if (imc < 18.5){
        printf("Abaixo do peso\n");
    }else if(imc < 25.0){
        printf("Normal\n");
    }else if(imc < 30.0){
        printf("Sobrepeso\n");
    }else if(imc >= 30){
        printf("Obeso\n");
    }else{
        printf("Isso está certo mesmo?\n");
    }

    return 0;
}
