// inserir dados no começo da lista

#include <stdio.h>
#include <stdlib.h>

typedef struct no {

    int valor;
    struct no *proximo;

} No;

// procedimento para inseir no incio 

void inserir_no_inicio(No **lista, int num){
    No *novo = malloc(sizeof(No));

    if(novo){
        // o novo elemento vai receber o valor num
        novo->valor = num;
        novo -> proximo = *lista;
        //atualiza o inico da lista
        *lista = novo;
    }

}

int main(){

    No *lista = NULL; //cabeça da lista

    inserir_no_inicio(&lista, 10);
    inserir_no_inicio(&lista, 20);
    inserir_no_inicio(&lista, 30);

    // percorre a lista
    No *aux = lista;
    while(aux != NULL){
        printf("%d " , aux->valor);
        aux = aux->proximo;
    }


    return 0;
}