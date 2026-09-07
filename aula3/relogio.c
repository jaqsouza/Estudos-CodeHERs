#include <stdio.h>

int main(void){
    int a = 10;
    int b = 4;

    printf("%.2x\n", (a+b)%12);

    return 0;
}
