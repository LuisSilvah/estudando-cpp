// Elabore uma função que inverta uma fila

#include <stdio.h>
#include <stdlib.h>

struct filaNo
{
    int N;
    struct filaNo *proximo;
};

struct fila
{
    struct filaNo *primeiro;
    struct filaNo *ultimo;
};

void insert(struct fila *fila, int valor)
{
    struct filaNo *novo = (struct filaNo *)malloc(sizeof(struct filaNo));
    novo->N = valor;
    novo->proximo = NULL;

    if (fila->ultimo == NULL)
    {
        fila->primeiro = novo;
    }
    else
        fila->ultimo->proximo = novo;

    fila->ultimo = novo;
}

void percorrer(struct fila *fila)
{
    struct filaNo *atual = fila->primeiro;

    if (atual == NULL)
    {
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

void inversa(struct fila* fila) {
    if (fila->primeiro == NULL) {
        printf("Fila vazia.\n");
        return;
    }

    struct filaNo* anterior = NULL;
    struct filaNo* atual = fila->primeiro;
    struct filaNo* proximo = NULL;

    // Atualiza o ponteiro `ultimo` para o novo último elemento
    fila->ultimo = fila->primeiro;

    // Reverte os ponteiros de cada nó
    while (atual != NULL) {
        proximo = atual->proximo;  // Armazena o próximo nó
        atual->proximo = anterior; // Inverte o ponteiro
        anterior = atual;          // Move o "anterior" para o nó atual
        atual = proximo;           // Avança para o próximo nó
    }

    // Atualiza o ponteiro `primeiro` para o novo início
    fila->primeiro = anterior;

    printf("Fila invertida com sucesso.\n");
}


int main()
{
    struct fila *fila = (struct fila *)malloc(sizeof(struct fila));
    fila->primeiro = NULL;
    fila->ultimo = NULL;

    insert(fila, 10);
    insert(fila, 20);
    insert(fila, 30);
    percorrer(fila);
    inversa(fila);
    percorrer(fila);

    return 0;
}