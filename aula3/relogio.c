#include <stdio.h>

int main(void){
    int a = 10; # Hora atual
    int b = 4;  # Daqui tanto tempo

    printf("%.2x\n", (a+b)%12); # Treinando resto; quanto tempo se passou

    return 0;
}
