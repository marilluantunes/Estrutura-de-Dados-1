#include <stdio.h>

int contaSete(long long n ){
    if (n == 0){
        return 0;
    }

    int ultimoDigito = n % 10;
    
    int conta = (ultimoDigito == 7) ? 1 : 0;

    return conta + contaSete(n/10);

}

int main(){
    long long n;
    scanf("%lld" , &n);

    // caso de n ser 0

    if (n == 0){
        printf("0\n");
    }
    else {
        printf("%d\n" , contaSete(n));

    }

    return 0;
}