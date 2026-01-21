#include <stdio.h>

void troca(char *s) {
    if (*s == '\0')
        return;

    if (*s == 'x')
        *s = 'y';

    troca(s + 1);
}

int main() {
    char str[81];

    scanf("%s", str);

    troca(str);

    printf("%s\n", str);

    return 0;
}
