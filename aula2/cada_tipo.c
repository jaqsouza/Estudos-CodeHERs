#include <stdio.h>

int main(void){
    int i = 30;
    long l = 2000000L;
    unsigned u = 87;
    float f = 2.21;
    double d = 5.14;
    char c = 'J';
    int mini = 206;
    int hex = 9;

    printf("%d\n", i);
    printf("%ld\n", l);
    printf("%u\n", u);
    printf("%f\n", f);
    printf("%lf\n", d);
    printf("%c\n", c);
    printf("%x\n", mini);
    printf("%02x\n", hex);

    return 0;
}
