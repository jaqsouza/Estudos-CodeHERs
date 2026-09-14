#include <stdio.h>

int main(void){
    int n, maior, menor;
    int a = 0;

    printf("Digite números inteiros (0 para parar):\n");
    scanf("%d", &n);

    while (n != 0) {

        if (a == 0) {
            maior = n;
            menor = n;
            a = 1;  
        } else if (n > maior) {
            maior = n;
        } else if (n < menor) {
            menor = n;
        }

        scanf("%d", &n);
    }

        if (a == 1) {
        printf("O maior número digitado foi: %d\n", maior);
        printf("O menor número digitado foi: %d\n", menor);
    } else {
        printf("Nenhum número foi digitado.\n");
    }

    return 0;


}
