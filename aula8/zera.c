#include <stdio.h>

void zera(int *p){
    int n = 0;

    printf("%d do void\n", n);
}

int main(void){
    int n = 99;
    zera(&n); // se comentar essa linha o código imprime apenas o 99

    printf("%d do main\n", n);

    return 0;
}
