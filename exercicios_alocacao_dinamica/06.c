#include <stdio.h>
#include <stdlib.h>


int main () {
    int *vetor;
    int tamanho_bytes;
    char opcoes;

    //pede o tamanho em bytes ao usuario
    printf("Digite o tamanho do vetor em bytes: ");

    scanf("%d" , &tamanho_bytes);

    if (tamanho_bytes % sizeof(int)){

        printf("\nEsse numero nao é multiplo do tamanho do tipo inteiro: ");
        return 1;
    }

    //aloca dinamicamente na memoria 

    vetor = (int *) calloc((tamanho_bytes/sizeof(int)) , sizeof(int));

    //verificacao
    if (vetor == NULL) {
        printf("Erro de alocacao");
        return 1;
    }

    printf("\nForan alocados %d inteiros " , tamanho_bytes/sizeof(int));


    //opcoes de escolha do usuario
    //loop interface

    while(1){
    
        printf("\nDigite 'a' se deseja inserir um elemente ao vetor");
        printf("\nDigite 'b' se deseja visualizar um elemento do vetor");
        printf("\nDigite 's' para sair");
        printf("\n");
        scanf(" %c" , &opcoes);

        if (opcoes == 's'){
            break;
        }

        if (opcoes == 'a' ){

            printf("\nDigite o valor a ser inserido e a posicao dele no vetor: ");
            int valor;
            int posicao;
            scanf("%d %d"  , &valor , &posicao);

            vetor[posicao] = valor;

            printf("valor: %d na posicao %d" , vetor[posicao] , posicao);

            printf("\n========VETOR==========\n");
            for (int i = 0 ; i < tamanho_bytes / sizeof(int); i++){
                printf("%d " , vetor[i]);
            }
        }

        if (opcoes == 'b'){
            printf("\nDigite a posicao em que deseja consultar o valor: ");
            int posicao;
            scanf(" %d" , &posicao);

            printf("\nO valor contido na posicao %d eh: %d" , posicao , vetor[posicao]);
        }
    }


    return 0;
}
