#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(void){
    unsigned char v[] = "Olá, Mundo!\n";
    int n = sizeof(v) - 1;
    int offset = 0;

    while (offset < n){
        printf("%06x ", offset);

        int linha = 16;
        if (offset + linha > n){
            linha = n - offset;
        }

        for (int i = 0; i < linha; i++){
            printf("%02x ", v[offset + i]);
        }

        for (int i = linha; i < 16; i++){
            printf("   ");
        }

        printf(" ");

        for (int i = 0; i < linha; i++){
            unsigned char c = v[offset + i];
            printf("%c", isgraph(c) ? c : '.');
        }

        printf("\n");
        offset += linha;
    }
    
    return 0;
}
