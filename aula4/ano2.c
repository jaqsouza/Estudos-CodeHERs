#include <stdio.h>

int main(void){
    int a;

    printf("Diga um ano: ");
    scanf("%d", &a);

    if (a%4 == 0 && a%100 != 0){
        printf("Este é um ano bissexto\n");
    }else if (a%100 == 0 && a%400 == 0){
        printf("Ele é diferente\n");
    } else{
        printf("Não é bissexto\n");
    }

    return 0;
}
