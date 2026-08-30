#include <stdio.h>

int main(void){
    int valora;
    int valorb;

    printf("Digite um valor: ");
    scanf("%d", &valora);
    printf("Digite outro valor: ");
    scanf("%d", &valorb);
    printf("A diferança entre ambos é %d e o produto é %d\n", valora-valorb, valora*valorb);

    return 0;
}
