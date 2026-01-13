#include <stdio.h>

int main() {
    int n;
    scanf("%d" , &n);
    int quantidade = 1;


    for (int i = 1; i<=n; i++){
        for (int k=1; k <= quantidade; k++){
            printf("*");
        }
        printf("\n");
        quantidade +=2;
    }

    return 0;
}