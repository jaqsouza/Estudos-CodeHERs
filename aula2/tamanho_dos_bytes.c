#include <stdio.h>

int main(void){
    char c = 'J';
    int i = 19;
    int n = 25;
    double d = 12.4;

    printf("Descobrindo o endereço de c: %p\n", &c);
    printf("Descobrindo o endereço de i: %p\n", &i);
    printf("Descobrindo o endereço de n: %p\n", &n);
    printf("Descobrindo o endereço de d: %p\n", &d);

    return 0;
}
