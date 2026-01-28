#include <stdio.h>
#include <stdlib.h>

int main (){
    int *vetor;
    int tamanho;
    int contador_par = 0;
    int contador_impar = 0;
    int *vetor_pares;
    int *vetor_impares;

    //pede ao usuario o tamanho do vetor
    printf("Digite o tamanho do vetor: \n");
    scanf("%d" , &tamanho);

    //alocacao de memoria 
    vetor = (int *) malloc(tamanho * sizeof(int));
    vetor_pares = (int *) malloc(tamanho * sizeof(int));
    vetor_impares = (int *) malloc(tamanho * sizeof(int)); 

    //verficacao
    if (vetor == NULL || vetor_impares == NULL || vetor_pares == NULL){
        printf("Erro ao alocar memoria");
        return 1;
    }

    //pede ao usuario digitar os numeros do vetor
    for (int i = 0; i < tamanho; i++){
        printf("Digite o %d numero: " , i + 1);
        scanf("%d" , &vetor[i]);
    }

    // mostra o vetor 
    printf("\n ========= VETOR ========\n");
    for (int i = 0 ;  i < tamanho ; i++){
        if (i > 0) {
            printf(",");
        }
        printf("%d" , vetor[i]);
    }

    printf("\n");

    // verificar quantos numeros sao pares
    for (int i = 0 ; i < tamanho ; i++){
        if (vetor[i] % 2 == 0) {
            vetor_pares[contador_par] = vetor[i];
            contador_par++;
        }

        else {
            vetor_impares[contador_impar] = vetor[i];
            contador_impar++;
        }
    }

    // mostra os numeros pares
    printf("\n%d numero(s) par(es) encontrado(s): " , contador_par);
    for(int i = 0 ; i < contador_par ; i++){
        printf("%d " , vetor_pares[i]);
    }

    printf("\n");

    

    //mostra os numeros 
    printf("%d numero(s) impar(es) encontrado(s): " , contador_impar);
    for (int i = 0 ; i < contador_impar; i++){
        printf("%d " , vetor_impares[i]);
    }

    // limpar memorias 

    free(vetor);
    free(vetor_impares);
    free(vetor_pares);

    return 0;
}