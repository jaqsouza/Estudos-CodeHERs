#include <stdio.h>
#define bu 5

int main(void){
    int v[bu];

    printf("Digite %d números: \n", bu);
    for (int i = 0; i < bu; i++){
        printf("v[%d]: ", i);
        scanf("%d", &v[i]);
    }

    int maior = v[0];
    int menor = v[0];
    
    for (int i = 1; i < bu; i++){
        if(v[i] > maior){
            maior = v[i];
        }

        if(v[i] < menor){
            menor = v[i];
        }
    }
    printf("O maior e menor número entre eles é: \n");
    printf("maior: %d\n", maior);
    printf("menor: %d\n", menor);

    return 0;
}
