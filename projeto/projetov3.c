#include <stdio.h>
#include <string.h>
#include <ctype.h>

int print(unsigned char c);
void print_linha_hex(unsigned char v[], int offset, int n);
void print_coluna_ascii(unsigned char v[], int offset, int n);

int main(void){
    unsigned char v[] = "Olá, Mundo!\n";
    int n = sizeof(v) - 1;
    int offset = 0;

    while (offset < n){
        int linha = 16;
        if (offset + linha > n){
            linha = n - offset;
        }

        printf("%06x ", offset);
        print_linha_hex(v, offset, linha);

        for (int i = linha; i < 16; i++){
            printf("   ");
        }

        printf(" ");
        print_coluna_ascii(v, offset, linha);
        printf("\n");

        offset += linha;
    }
    
    return 0;
}

int print(unsigned char c){
    return isgraph(c) ? 1 : 0;
}

void print_linha_hex(unsigned char v[], int offset, int n){
    for (int i = 0; i < n; i++){
        printf("%02x ", v[offset + i]);
    }
}

void print_coluna_ascii(unsigned char v[], int offset, int n){
    for (int i = 0; i < n; i++){
        unsigned char c = v[offset + i];
        printf("%c", print(c) ? c : '.');
    }
}
