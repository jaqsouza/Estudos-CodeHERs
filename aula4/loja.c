#include <stdio.h>

int main(void) {
    int opcao;
    int a;
    int b = 20;
    int c = 20;
    int d = 20;

    do {
        printf("\n1 - Algodão Doce\n");
        printf("2 - Pipoca\n");
        printf("3 - Bala\n");
        printf("0 - Sair\n");
        printf("Opção: ");
        scanf("%d", &opcao);

        if (opcao == 0) {
            printf("Volte sempre.\n");
            break;
        }

        printf("Digite a quantidade: ");
        scanf("%d", &a);

        if (a <= 0 || a > 20){
            printf("Não temos essa quantidade em estoque.\n");
            break;
        }

        switch (opcao) {
            case 1: printf("Algodão-Doce foi escolhida\n"); 
                if (b >= a){
                    b -= a;
                    printf("%d unidades compradas.\n", a);
                } else {
                    printf("Não temos essa quantia em estoque.\n");
                }
                break;

            case 2: printf("Pipoca foi escolhida\n"); 
                if (c >= a){
                    c -= a;
                    printf("%d unidades compradas.\n", a);
                } else {
                    printf("Não temos essa quantia em estoque.\n");
                }
                break;

            case 3: printf("Bala foi escolhida\n"); 
                if (d >= a){
                    d -= a;
                    printf("%d unidades compradas.\n", a);
                } else {
                    printf("Não temos essa quantia em estoque.\n");
                }
                break;

            default: printf("Opção inválida.\n");
        }

    } while (opcao != 0);

    printf("Tente novamente!\n");
    return 0;
}
