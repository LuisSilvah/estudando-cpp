// Elabore uma função que dado uma fila, transforme-a
// em duas filas uma com os números pares e outra com
// os ímpares

#include <stdio.h>
#include <stdlib.h>

struct filaNo {
    int N;
    struct filaNo *proximo;
};

struct fila {
    struct filaNo *primeiro;
    struct filaNo *ultimo;
};

void insert (struct fila *fila, int valor) {

    struct filaNo *novo = (struct filaNo*)malloc(sizeof(struct filaNo));
    novo->N = valor;
    novo->proximo = NULL;

    if(fila->ultimo == NULL){
        fila->primeiro = novo;
    } else fila->ultimo->proximo = novo;

    fila->ultimo = novo;

}

void percorrer(struct fila *fila) {
    struct filaNo *atual = fila->primeiro;

    if(atual == NULL) {
        printf("Fila vazia.\n");
        return;
    }

    while (atual != NULL)
    {
        printf("%d -> ", atual->N);
        atual = atual->proximo;

    }

    printf("NULL\n");
}

void separarFila(struct fila *fila, struct fila *impar, struct fila *par)
{
    struct filaNo *atual = fila->primeiro;

    if(atual == NULL) {
        printf("Fila vazia.\n");
        return;
    }

    while (atual != NULL)
    {

        if(atual->N % 2 == 0) {
            insert(par, atual->N);
        } else insert(impar, atual->N);

        atual = atual->proximo;
    }
    

};


int main() {
    struct fila *fila = (struct fila*)malloc(sizeof(struct fila));
    fila->primeiro = NULL;
    fila->ultimo = NULL;

    insert(fila, 10);
    insert(fila, 20);
    insert(fila, 33);
    percorrer(fila);

    struct fila *impar = (struct fila*)malloc(sizeof(struct fila));
    impar->primeiro = NULL;
    impar->ultimo = NULL;
    struct fila *par = (struct fila*)malloc(sizeof(struct fila));
    par->primeiro = NULL;
    par->ultimo = NULL;

    separarFila(fila, impar, par);

    printf("\nImpar: ");
    percorrer(impar);
    printf("Par: ");
    percorrer(par);


    return 0;
}