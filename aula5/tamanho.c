#include <stdio.h>
#define bu 5

int main(void){
    int v[] = {1, 2, 3, 4, 5};

    size_t tamanho = sizeof(v) / sizeof(v[0]);
    printf("%zu\n", tamanho);
    
    return 0;
}
