#include <stdio.h>
#define bu 5

int main(void){
    unsigned char v[bu] = {0x48, 0x65, 0x6c, 0x6c, 0x6f};
    int n = sizeof(v);
    for (int i = 0; i < n; i++){
        printf("%02x ", v[i]);
    }
    printf("\n");
    return 0;
}
