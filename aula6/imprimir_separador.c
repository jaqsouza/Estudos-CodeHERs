#include <stdio.h>

void imprimir_separador(int n){
    for (int i = 0; i < n; i++){
        putchar('-');
    }
    putchar('\n');
}

int main(void){
    imprimir_separador(20);
    imprimir_separador(10);
    imprimir_separador(5);

    return 0;
}
