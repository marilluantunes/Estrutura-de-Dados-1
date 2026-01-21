//Pares de caracteres

#include <stdio.h>

int conta(char *p) {
    if(*(p + 2) == '\0')
        return 0;
    
    if (*p == *(p + 2))
        return 1 + conta(p + 1);
    else
        return conta(p + 1);

}

int main() {
    char str[201];

    scanf("%s" , str);

    printf("%d\n" , conta(str));

    return 0;
}