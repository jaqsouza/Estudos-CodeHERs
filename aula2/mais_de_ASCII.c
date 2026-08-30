#include <stdio.h>

int main(void){
    char c;

    printf("Escolha uma letra do alfabeto: ");
    scanf("%c", &c);
    printf("Em ASCII ela é %d.\n", c);

    return 0;
}
