#include <stdio.h>


void invertido(char *s) {
    if (*s == '\0')
        return;
    
        invertido(s+1);
        printf("%c" , *s);
}

int main(){
    char str[2001];
    scanf("%s" , str);
    invertido(str);
    printf("\n");

    return 0;
}