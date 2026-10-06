#include <stdio.h>

int maior(int a, int b){
    if (a > b){
        return a;
    }
    else { return b;
    }
}

int main(void){
    int a = maior(3, 5);
    printf("O maior é %d\n", a);

    int b = maior(7, 2);
    printf("O maior é %d\n", b);

    int c = maior(20, 15);
    printf("O maior é %d\n", c);

    return 0;
}
