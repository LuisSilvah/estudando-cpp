// Ler uma lista de inteiros de N posições. Escreva a seguir o valor e
// a posição do maior e menor elementos lidos

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

struct listaNo *insert(struct listaNo *lista, int valor)
{
    struct listaNo *novo = (struct listaNo *)malloc(sizeof(struct listaNo));
    novo->N = valor;
    novo->proximo = lista;

    return novo;
}

void percorrer(struct listaNo *lista)
{
    struct listaNo *atual = lista;

    int maior = 0;
    int posicaoMaior = 1;
    int menor = 0;
    int posicaoMenor = 1;
    int posicao = 0;

    if (atual == NULL)
    {
        printf("Lista vazia.\n");
        return;
    }

    while (atual != NULL)
    {
        if (atual->N > maior)
        {
            maior = atual->N;
            posicaoMaior = posicao;
        }
        else if (atual->N < menor)
        {
            menor = atual->N;
            posicaoMenor = posicao;
        }

        printf("%d -> ", atual->N);
        if (posicao == 0)
            menor = atual->N;

        atual = atual->proximo;
        posicao++;
    }

    printf("NULL\n");
    printf("Maior: [%i]%d\n", posicaoMaior, maior);
    printf("Menor: [%i]%d\n", posicaoMenor, menor);
}

int main()
{
    struct listaNo *lista = inicializar();

    lista = insert(lista, 40);
    lista = insert(lista, 4);
    lista = insert(lista, 30);
    percorrer(lista);

    return 0;
}