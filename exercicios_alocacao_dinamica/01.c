#include <stdio.h>
#include <stdlib.h>

int main () {
    int *vetor;
    int i;


// a) aloca dinamicamente um array de 5 inteiros
    vetor = (int *) malloc(5*sizeof(int));

//verificacao
    if (vetor == NULL){
        printf("Erro ao alocar memoria. \n");
        return 1;
    }
// b) pede ao usuario digitar os cinco numeros

    for ( int i = 0; i < 5; i ++){
        printf("Digite o %d número: " , i + 1);
        scanf("%d" , &vetor[i]);
    }

    // c) mostra na tela os numeros

    printf("\nNúmeros digitados: \n");
    for(int i = 0 ; i < 5 ; i ++){
        printf("%d" , vetor[i]);
    }
    printf("\n");

    //liberar a memoria alocada 
    free(vetor);
    vetor = NULL;

    printf("\n------Vetor depois do free-----\n");

    for (int i = 0 ; i < 5 ; i++){
        printf("%d" , vetor[i]);
    }


    return 0;

     }