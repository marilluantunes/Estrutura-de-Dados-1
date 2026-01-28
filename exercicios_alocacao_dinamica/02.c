#include <stdio.h>
#include <stdlib.h>

int main (){
    int *vetor;
    int tamanho;

    //pede ao usuario o tamanho do vetor
    printf("Digite o tamanho do vetor: \n");
    scanf("%d" , &tamanho);

    printf("\n");

    //alocacao de memoria 
    vetor = (int *) malloc(tamanho * sizeof(int));

    //verificacao
    if (vetor == NULL ){
        printf("Erro ao acolocar memoria \n");
        return 1;

    }

    // pede ao usuario digitar os elementos do vetor 

    for (int i = 0 ; i < tamanho ; i++){
        printf("Digite o %d numero: " , i + 1);
        scanf("%d" , &vetor[i]);
    }

    // exibe o vetor 

    printf("\n=======VETOR=========\n");
    for (int i = 0 ; i < tamanho ; i++){
        printf("%d" , vetor[i]);
    }

    printf("\n");

    //libera memoria 

    free(vetor);

}