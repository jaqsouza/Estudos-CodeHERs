#include <stdio.h>

int main(void){
    char letra;

    printf("Qual a primeira letra do seu nome?: ");
    scanf("%c", &letra);
    printf("Você sabia que %c em ASCII é %d?\n", letra, letra);

    return 0;
}
