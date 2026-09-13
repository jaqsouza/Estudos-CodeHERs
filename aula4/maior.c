#include <stdio.h>

int main(void){
    int a, b, c;

    printf("Diga três números inteiros: ");
    scanf("%d %d %d", &a, &b, &c);

    if (a > b && a > c){
        printf("%d é o maior entre eles.\n", a);
    } else if (b > a && b > c){
        printf("%d é o maior entre eles.\n", b);
    }else{
        printf("%d é o maior entre eles.\n", c);
    }

    return 0;


}
