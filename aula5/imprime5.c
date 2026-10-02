#include <stdio.h>
#define bu 5

int main(void){
    int v[bu];
    printf("Digite %d números: \n", bu);
    for (int i = 0; i < bu; i++){
        printf("v[%d]: ", i);
        scanf("%d", &v[i]);
    }
    printf("Ordem invertida: \n");
    for (int i = bu - 1; i >= 0; i--)
        printf("%d", v[i]);
    printf("\n");
        return 0;
}
