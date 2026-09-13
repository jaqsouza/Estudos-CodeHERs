#include <stdio.h>

int main(void) {
    int opcao;
    double a;

    printf("Bem-vinda ao convertor de medidas\n. Por favor, escolha uma das seguintes opções: \n");

    do {
        printf("\n1 - Km para metros\n");
        printf("2 - Kg para gramas\n");
        printf("3 - Celsius para Fahrenheit\n");
        printf("0 - Sair\n");
        printf("Opção: ");
        scanf("%d", &opcao);

        if (opcao == 0) {
            printf("Volte sempre.\n");
            break;
        }

        printf("Digite o valor que você gostaria de converter: ");
        scanf("%lf", &a);

        switch (opcao) {
            case 1: printf("%.2f em metros é: %.2f\n", a, a*1000);
                break;

            case 2: printf("%.2f em gramas é: %.2f\n", a, a*1000);
                break;

            case 3: printf("%.2f° em F° é: %.2f\n", a, (a*1.8)+32); 
                break;

            default: printf("Opção inválida.\n");
        }

    } while (opcao != 0);

    printf("Tente novamente!\n");
    return 0;
}
