#include <stdio.h>

int main() {
    int n;
    scanf("%d" , &n);


    for (int i = 1; i<=n; i++){
        for (int k=1; k <= i; k++){
            printf("%02d " , i);
        }
        printf("\n");
    }

    printf("\n");

    for (int e = 1; e <=n; e ++){
        for (int m = 1; m <= e; m++){
            printf("%02d " , m);
        }
        printf("\n");
    }

    return 0;
}