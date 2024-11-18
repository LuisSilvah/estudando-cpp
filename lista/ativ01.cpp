// Fazer um programa que faz a leitura de duas listas X e Y,
// ambas com N reais(N deve ser lido tb).
// Efetue a multiplicação dos respectivos pares de elementos de X por Y,
//  gerando uma terceira lista Z.Imprima as listas X, Y e Z.
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
};

void percorrer(struct listaNo *lista)
{
    struct listaNo *atual = lista;

    while (atual != NULL)
    {
        printf("%d -> ", atual->N);
        atual = atual->proximo;
    }

    printf("NULL\n");
};

struct listaNo *buscar(struct listaNo *lista, int valor)
{
    struct listaNo *atual = lista;

    while (atual != NULL)
    {
        if (atual->N == valor)
        {
            return atual;
        }

        atual = atual->proximo;
    }

    return NULL;
}

void gerarPar(struct listaNo *listaX, struct listaNo *listaY, struct listaNo *exitListaZ)
{

    struct listaNo *atualX = listaX;

    while (atualX != NULL)
    {
        struct listaNo *busca = buscar(listaY, atualX->N);

        if (busca != NULL)
        {
            exitListaZ = inserir(exitListaZ, atualX->N * busca->N);
        }

        atualX = atualX->proximo;
    }

    printf("\nLista Z após insercoes: ");
    percorrer(exitListaZ);
}

int main()
{
    struct listaNo *listaX = inicializar();
    struct listaNo *listaY = inicializar();
    struct listaNo *listaZ = inicializar();

    listaX = inserir(listaX, 10);
    listaX = inserir(listaX, 20);
    listaX = inserir(listaX, 30);

    listaY = inserir(listaY, 10);
    listaY = inserir(listaY, 20);
    listaY = inserir(listaY, 30);

    printf("\nLista X após insercoes: ");
    percorrer(listaX);
    printf("\nLista Y após insercoes: ");
    percorrer(listaY);
    printf("\nLista Z: ");
    percorrer(listaZ);
    gerarPar(listaX, listaY, listaZ);
}
