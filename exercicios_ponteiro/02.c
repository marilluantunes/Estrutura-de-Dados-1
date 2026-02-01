#include <stdio.h>
#include <string.h>

void fracionario(float n , int *inteiro , float *fracionario){
    *inteiro = (int)n;
    *fracionario = n - *inteiro;
};

int main(){
    float n;
    int inteiro;
    float frac;

    printf("Digite um numero real: ");
    scanf("%f" , &n);

    fracionario(n, &inteiro, &frac);

    printf("parte inteira: %d\n" , inteiro);
    printf("Parte fracionaria: %.2f\n" , frac);

    return 0;
}