// Fazer um programa que faz a leitura de uma lista X,
// com N inteiros (N deverá ser lido).
// Gere uma segunda lista com os valores de X em ordem inversa.
// Imprimir X e a lista com a ordem inversa.
#include <stdio.h>
#include <stdlib.h>

struct listaNo
{
    int N;
    struct listaNo *proximo;
};

struct listaNo *inicializar()
{
    return NULL;
};

struct listaNo *inserir(struct listaNo *lista, int valor)
{
    struct listaNo *novo = (struct listaNo *)malloc(sizeof(struct listaNo));
    novo->N = valor;
    novo->proximo = lista;

    return novo;
}

void inverso(struct listaNo **lista)
{
    struct listaNo *anterior = NULL;
    struct listaNo *atual = *lista;
    struct listaNo *proximo = NULL;

    // Percorre a lista e inverte os ponteiros
    while (atual != NULL) {
        proximo = atual->proximo;  // Armazena o próximo nó
        atual->proximo = anterior; // Inverte o ponteiro
        anterior = atual;          // Move o "anterior" para o nó atual
        atual = proximo;           // Avança para o próximo nó
    }

    // Atualiza o ponteiro da cabeça da lista
    *lista = anterior;

    printf("Lista invertida com sucesso.\n");
}

void percorrer(struct listaNo *lista)
{
    struct listaNo *atual = lista;

    while (atual != NULL)
    {
        printf("%d -> ", atual->N);

        atual = atual->proximo;
    }

    printf("NULL\n");
}

int main()
{
    struct listaNo *listaX = inicializar();

    listaX = inserir(listaX, 10);
    listaX = inserir(listaX, 20);
    listaX = inserir(listaX, 30);
    printf("Lista X: ");
    percorrer(listaX);
    inverso(&listaX);
    printf("Lista X: ");
    percorrer(listaX);

    return 0;
}