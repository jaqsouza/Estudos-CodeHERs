#include <stdio.h>

int main(void){
    double a;
    double b;

    printf("Qual a base do seu triângulo?: ");
    scanf("%lf", &a);
    printf("E a altura?: ");
    scanf("%lf", &b);
    printf("sua área é %.2f\n", a*b/2.0);

    return 0;
}
