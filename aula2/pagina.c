#include <stdio.h>

int main(void){
    int i;

    printf("Qual a última página que você leu de um livro?: ");
    scanf("%d", &i);
    printf("A página %d em hexadecimal é %02x.\n", i, i);

    return 0;
}
