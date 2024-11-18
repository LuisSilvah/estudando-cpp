// Elabore uma função que apague a informação 15 de
// uma fila se ela existir

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

int remover(struct fila *fila)
{
    if (fila->primeiro == NULL)
    {
        printf("Fila vazia\n");
        return -1;
    }

    struct filaNo *temp = fila->primeiro;
    int valor = temp->N;
    fila->primeiro = fila->primeiro->proximo;
    if (fila->primeiro == NULL)
    {
        fila->ultimo = NULL;
    }

    free(temp);
    return valor;
}

int removeNumber(struct fila* fila, int valor) {
    struct filaNo* atual = fila->primeiro;
    struct filaNo* anterior = NULL;
    int encontrado = -1;

    while (atual != NULL) {
        if (atual->N == valor) {
            encontrado = valor;

            // Remove o nó atual
            if (anterior == NULL) {
                fila->primeiro = atual->proximo; // Remover do início
            } else {
                anterior->proximo = atual->proximo;
            }

            if (atual == fila->ultimo) {
                fila->ultimo = anterior; // Atualiza o último se necessário
            }

            free(atual);
            break;
        }

        anterior = atual;
        atual = atual->proximo;
    }

    if (encontrado == -1) {
        printf("Valor %d não encontrado na fila.\n", valor);
    }

    return encontrado;
}

int main()
{
    struct fila *fila = (struct fila *)malloc(sizeof(struct fila));
    fila->primeiro = NULL;
    fila->ultimo = NULL;

    insert(fila, 10);
    insert(fila, 15);
    insert(fila, 30);
    percorrer(fila);

    printf("Remover: %d\n", removeNumber(fila, 10));
    percorrer(fila);

    return 0;
}