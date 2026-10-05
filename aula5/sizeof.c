#include <stdio.h>

int main(void){
    char a = 'a';
    short b = 1;
    int c = 10;
    long d = 2;
    float e = 4.5;
    double f = 2.5;

    printf("%zu\n", sizeof(a));
    printf("%zu\n", sizeof(b));
    printf("%zu\n", sizeof(c));
    printf("%zu\n", sizeof(d));
    printf("%zu\n", sizeof(e));
    printf("%zu\n", sizeof(f));

    return 0;

}
