// Elabore uma função que conte quantos números
// pares possui uma fila e retorne esta quantidade

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
    {
        fila->ultimo->proximo = novo;
    }

    fila->ultimo = novo;
}

void print(struct fila *fila)
{
    struct filaNo *atual = fila->primeiro;

    if (atual == NULL)
    {
        printf("Fila vazia. \n");
        return;
    }

    while (atual != NULL)
    {
        printf("%d -> ", atual->N);

        atual = atual->proximo;
    }

    printf("NULL\n");
}

void countPares(struct fila *fila)
{
    struct filaNo *atual = fila->primeiro;
    int qtdPares = 0;

    if (atual == NULL)
    {
        printf("Lista vazia. \n");
        return;
    }

    while (atual != NULL)
    {
        if (atual->N % 2 == 0)
        {
            qtdPares += 1;
        }

        atual = atual->proximo;
    }

    printf("Quantidade de pares %d \n", qtdPares);
}

int main()
{
    struct fila *fila = (struct fila *)malloc(sizeof(struct fila));
    fila->primeiro = NULL;
    fila->ultimo = NULL;

    insert(fila, 10);
    insert(fila, 20);
    insert(fila, 30);
    print(fila);

    countPares(fila);

    return 0;
}
