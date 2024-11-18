// Fazer um programa que faz a leitura de uma 
// lista X com N reais (N deverá ser lido). 
// Calcule o somatório de todos os elementos da lista.
//  Imprimir a lista lida e o valor do somatório.

#include <stdio.h>
#include <stdlib.h>

struct listaNo {
    int N;
    struct listaNo *proximo;
};

struct listaNo* inicializar()
{
    return NULL;
};

struct listaNo* inserir(struct listaNo *lista, int valor)
{
    struct listaNo *novo = (struct listaNo*)malloc(sizeof(struct listaNo));
    novo->N = valor;
    novo->proximo = lista;

    return novo;
};

void percorrer(struct listaNo *lista) {
    struct listaNo *atual = lista;
    int soma = 0;

    while(atual != NULL) {
        printf("%d -> ", atual->N);
        soma += atual->N;

        atual = atual->proximo;
    }

    printf("NULL");
    printf("\nSoma lista: %d\n", soma);
}


int main() {
    struct listaNo *listaX = inicializar();

    listaX = inserir(listaX, 10);
    listaX = inserir(listaX, 20);
    listaX = inserir(listaX, 30);

    percorrer(listaX);

    return 0;
}

