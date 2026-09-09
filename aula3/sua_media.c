#include <stdio.h>

int main(void){
    double a;
    double b;
    double c;

    printf("Qual a foi a sua primeira nota?: ");
    scanf("%lf", &a);
    printf("Qual foi sua segunda nota?: ");
    scanf("%lf", &b);
    printf("Qual foi a sua terceira nota?: ");
    scanf("%lf", &c);
    printf("Sua média é: %.2f\n", (a+b+c)/3);
    printf("Recebera 1 se aprovado e 0 se não.\n");
    printf("%d\n", (a+b+c)/3 >= 7.0 && (a || b || c) < 4.0);

    return 0;
}
