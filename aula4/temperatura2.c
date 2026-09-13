#include <stdio.h>

int main(void){
    int a;

    printf("Qual é a temperatura atual?: ");
    scanf("%d", &a);

    if (a < 0){
        printf("Que congelante\n");
    }else if (a == 0 || a <= 15){
        printf("Gelado\n");
    }else if (a >= 16 && a <= 25){
        printf("Está ok\n");
    }else if (a > 25){
        printf("Que quente\n");
    } else{
        printf("Não entendi\n");
    }

    return 0;
}
