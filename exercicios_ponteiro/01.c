#include <stdio.h>
#include <string.h>


int main(){

    int numero = 10;
    char nome[10] = "maria";
    char caractere = 'M';

    int *i = &numero;
    char *letra = &caractere;
    char *c = nome;


    printf("\n=========ANTES======\n");
    printf("%d %s %c\n" , numero , nome , caractere);

    *i = 5;
    strcpy(c, "luiza");
    *letra = 'L';


    printf("\n=========DEPOIS======\n");
    printf("%d %s %c\n" , numero ,  nome , caractere);


    return 0; 
}



