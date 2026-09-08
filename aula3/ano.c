#include <stdio.h>

int main(void){
    int ano;

    printf("Em que ano está?: ");
    scanf("%d", &ano);
    printf("Se este ano é %d\n", ano++);
    printf("Ano que vem será %d\n", ano);
    printf("Daqui 5 ano será %d\n", ano+=4);

    return 0;
}
