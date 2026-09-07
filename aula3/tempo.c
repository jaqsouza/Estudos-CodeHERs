#include <stdio.h>

int main(void){
    int segundos;

    printf("Quantos segundos?: ");
    scanf("%d", &segundos);
    printf("Em horas é: %.2f\n", (double)segundos/3600);
    printf("Em minutos é: %.2f\n", (double)segundos/60);
    printf("Treinando sobra: %d\n", segundos%60);

    return 0;
}
