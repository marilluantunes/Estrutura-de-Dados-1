#include <stdio.h>

void imprimeTracos(int n) {
    if (n == 0)
        return;
    printf("-");
    imprimeTracos(n - 1);
}

void linha(int n) {
    printf(".");
    imprimeTracos(n);
    printf("\n");
}

void regua(int n) {
    if (n == 0)
        return;

    regua(n - 1);
    linha(n);
    regua(n - 1);
}

int main() {
    int n;
    scanf("%d", &n);
    regua(n);
    return 0;
}
