/* demo_media.c — media com for */
#include <stdio.h>

#define bu 5

int main(void) {
    int notas[bu] = {9, 7, 6, 9, 8};
    int soma = 0;
    float media;
    int maior_media = 0;

    for (int i = 0; i < bu; i++){
        soma += notas[i];
    }
    media = (float)soma / bu;
    printf("Média: %.1f\n", media);

    for(int i = 0; i < bu; i++){
        if (notas[i] > media){
            maior_media++;
        }
    }
    printf("Quantidade de valores que estão acima da média: %d\n", maior_media);
    return 0;
}
