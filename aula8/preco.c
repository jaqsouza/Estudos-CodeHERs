#include <stdio.h>

int main(void){
    float preco = 50.0f;
    float desconto = 0.0f;

    if (preco > 30.0f){
        float desconto = preco * 0.1f;
        printf("%.2f\n", desconto);
    }

    printf("%.2f\n", desconto);

    return 0;
}
