#include <stdio.h>

float celsius_para_fahrenheit(float c){
    return c * 9.0 / 5.0 + 32.0;
}

int main(void){
    float a = celsius_para_fahrenheit(0.0);
    printf("Temperatura %.1f\n", a);

    float b = celsius_para_fahrenheit(100.0);
    printf("Temperatura %.1f\n", b);

    float c = celsius_para_fahrenheit(37.0);
    printf("Temperatura %.1f\n", c);

    return 0;
}
