#include <stdio.h>

void imprime_dobro(int n){
    int resultado = n * 2;
    printf("%d\n", resultado);
}

int main(void){
    int resultado = 99;
    imprime_dobro(resultado);

    return 0;
}
