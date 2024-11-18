#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct valor
{
    int data;
    struct valor *next;
};

struct fila
{
    struct valor *first;
    struct valor *last;
};

void inserirValor(struct fila *f, int val)
{

    struct valor *novo = (struct valor *)malloc(sizeof(struct valor));

    if (novo == NULL)
    {
        printf("Erro ao alocar memória. \n");
        return;
    }

    novo->data = val;
    novo->next = NULL;

    if (f->last == NULL)
    {
        f->first = novo;
    }
    else
        f->last->next = novo;

    f->last = novo;
    printf("Cliente adicionado à fila!\n");
};

int main()
{
    struct fila *f = (struct fila *)malloc(sizeof(struct fila));
    f->first = NULL;
    f->last = NULL;

    int opcao, val;

    do
    {
        printf("1. Adicionar Valor");
        printf("2. Retirar Valor");
        printf("3. Exibir Valores");
        printf("4. Sair");
        scanf("%d", &opcao);

        switch (opcao)
        {
        case 1:
            printf("Digite o valor");
            scanf("%d", &val);
            inserirValor(f, val);
            break;

        default:
            break;
        }
    } while (opcao != 4);

    return 0;
}
