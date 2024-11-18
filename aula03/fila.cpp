#include <stdio.h>
#include <stdlib.h>
#include <iostream>
using namespace std;

struct no
{
    int data;
    struct no *next;
};

struct fila
{
    struct no *first;
    struct no *last;
};

void insert(struct fila *f, int valor)
{
    struct no *novo = (struct no *)malloc(sizeof(struct no));

    novo->data = valor;
    novo->next = NULL;

    if (f->last == NULL)
        f->first = novo;
    else
        f->last->next = novo;

    f->last = novo;

    cout << "first " << f->first->data;
    cout << "\nlast " << f->last->data;
    cout << "\n----------------\n";
};

int remove(struct fila *f)
{
    if (f->first == NULL)
    {
        cout << "Fila Vazia ";
        return -1;
    }

    struct no *temp = f->first;
    int valor = temp->data;

    f->first = f->first->next;
    if (f->first == NULL)
        f->last = NULL;

    free(temp);
    return valor;
};

int main()
{
    struct fila *f = (struct fila *)malloc(sizeof(struct fila));
    f->first = NULL;
    f->last = NULL;
    insert(f, 10);
    // insert(f, 20);
    // insert(f, 30);

    cout << "Removido " << remove(f);
    cout << "\n----------------\n";

    insert(f, 40);

    return 0;
}