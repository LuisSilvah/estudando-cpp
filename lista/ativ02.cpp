// Fazer um programa que faz a leitura de uma lista X
// com N inteiros (N deve ser lido tb).
// Multiplique cada elemento de X
// por um inteiro K (K também deverá ser lido).
// Imprimir a lista lida,
// o valor da variável K e a lista multiplicada por K.

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
}

struct listaNo *inserir(struct listaNo *lista, int valor)
{

    struct listaNo *novo = (struct listaNo *)malloc(sizeof(struct listaNo));
    novo->N = valor;
    novo->proximo = lista;

    return novo;
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

void multiplica(struct listaNo *lista, int valor, struct listaNo **resultado)
{

    struct listaNo *atual = lista;

    while (atual != NULL)
    {
        int mult = atual->N * valor;
        *resultado = inserir(*resultado, mult);
        atual = atual->proximo;
    }
}

int main()
{
    struct listaNo *listaX = inicializar();
    struct listaNo *listaK = inicializar();

    listaX = inserir(listaX, 10);
    listaX = inserir(listaX, 20);
    listaX = inserir(listaX, 30);

    int valorK = 10;
    multiplica(listaX, valorK, &listaK);

    printf("\nLista X: ");
    percorrer(listaX);
    printf("Valor K: %d", valorK);
    printf("\nLista K: ");
    percorrer(listaK);

    return 0;
}