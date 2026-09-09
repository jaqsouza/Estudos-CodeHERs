#include <stdio.h>

int main(void){
    double a;

    printf("Quantos metros você mediu?: ");
    scanf("%lf", &a);
    printf("Em centímetros isso da %.2f centímetros\n", a*100);
    printf("Em milímetros isso da %.2f milímetros\n", a*1000);  

    return 0;
}
