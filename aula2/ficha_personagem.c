#include <stdio.h>

int main(void){
    char c;
    int i;
    double d;

    printf("Vamos criar sua ficha de personagem.\n");
    printf("Por favor, no informe a primeira letra do seu nome: ");
    scanf("%c", &c);
    printf("Qual a sua idade?: ");
    scanf("%d", &i);
    printf("Qual a sua altura?: ");
    scanf("%lf", &d);
    printf("  \n");

    printf("🌿🌿🌿🌿🌿🌿🌿🌿🌿🌿🌿🌿🌿🌿🌿🌿🌿\n");
    printf("Seu personagem se chama: %c\n", c);
    printf("Sua idade é: %d\n", i);
    printf("Sua altura é: %.2f\n", d);
    printf("🌿🌿🌿🌿🌿🌿🌿🌿🌿🌿🌿🌿🌿🌿🌿🌿🌿\n");
    printf("  \n");
    printf("==================================\n");
    printf("Por favor, espere os créditos: \n");
    printf("Letra: %p\n", &c);
    printf("Idade: %p\n", &i);
    printf("Altura: %p\n", &d);
    printf("==================================\n");

    return 0;

}
