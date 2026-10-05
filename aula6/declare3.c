#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(void){
    char s[80];

    printf("Digite uma string: ");
    fgets(s, 80, stdin);
    s[strcspn(s, "\n")] = '\0';

    for (int i = 0; s[i] != '\0'; i++){
        unsigned char c = s[i];
        printf("[%d] %c %3d 0x%02x %s\n", i, c, c, c,
            isgraph(c) ? "visivel" : "espaço/ctrl");
    }
    
    return 0;
}
