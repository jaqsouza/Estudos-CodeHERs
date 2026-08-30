#include <stdio.h>

int main(void){
    double real;
    double dolar;

    printf("Quanto você tem em reais?: ");
    scanf("%lf", &real);
    printf("Qual a cotação atual do dolar?: ");
    scanf("%lf", &dolar);
    printf("Você tem %.2f dolares\n", real/dolar);

    return 0;
}
