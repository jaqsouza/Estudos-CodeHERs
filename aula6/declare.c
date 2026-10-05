#include <stdio.h>
#include <string.h>

int main(void){
    char s[80];
    fgets(s, 80, stdin);

    s[strcspn(s, "\n")] = '\0';
    
    return 0;
}
