#include <stdio.h>

void imprime_array(int arr[], int n){
    for (int i = 0; i < n; i++){
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int busca(int arr[], int n, int alvo){
    for (int i = 0; i < n; i++){
        if (arr[i] == alvo){
            return i;
        }
    }
    return -1;
}

int main(void){
    int a[5];
    int alvo = 0;

    printf("Digite 5 números inteiros: \n");
    for(int i = 0; i < 5; i++){
        scanf("%d", &a[i]);
    }

    printf("Elementos do array: \n");
    imprime_array(a, 5);

    printf("Digite um número para buscar: \n");
    scanf("%d", &alvo);

    int resultado = busca(a, 5, alvo);
    if (resultado != -1){
        printf("Posição em que se encontra no array: %d\n", resultado);
    } else {
        printf("Número não encontrado. \n");
    }

    return 0;
}
