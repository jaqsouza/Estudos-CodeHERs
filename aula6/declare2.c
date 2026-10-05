#include <stdio.h>
#include <string.h>

int main(void){
    char s[80];

    printf("Digite uma string: ");
    fgets(s, 80, stdin);
    s[strcspn(s, "\n")] = '\0';

    printf("strlen = %zu\n", strlen(s));
    printf("sizeof(s) = %zu\n", sizeof(s));
    
    return 0;
}
