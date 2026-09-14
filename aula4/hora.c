#include <stdio.h>

int main(void){
    int a;

    printf("Digite que horas são: ");
    scanf("%d", &a);

    if (a>=0 && a<=11){
        printf("Bom dia\n");
    }else if (a>=12 && a<=17){
        printf("Boa tarde\n");
    } else if (a>=18 && a<=23) {
        printf("Boa noite\n");
    } else {
        printf("Sai daqui\n");
    }

    return 0;
}
