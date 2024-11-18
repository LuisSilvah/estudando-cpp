// Elabore um Programa que utilize recursividade
// que recebe um vetor de inteiros e
// retorna o mesmo vetor em ordem crescente

#include <stdio.h>
#include <iostream>
#include <string.h>

using namespace std;

void ordemCrescenteVetor(int vec[5])
{
    int crescente[5];
    int aux;
    int prox;
    int alterado = false;

    // if (*prox > *vec)
    // {
    //     *vec = *prox;
    //     *prox = aux;
    // }

    for (int i = 0; i < 5; i++)
    {
        aux = vec[i];
        prox = vec[i + 1];

        if (alterado)
        {
            if (prox > vec[i])
            {
                crescente[i] = prox;
                crescente[i + 1] = aux;
                alterado = true;
            } else alterado = false;
        } else g
    }

    for (int i = 0; i < 5; i++)
    {
        cout << crescente[i];
    }
}
void cadastrarNumeros(int vec[5])
{
    for (int i = 0; i < 5; i++)
    {
        cout << "Adicionar valor" << endl;
        cin >> vec[i];
    }
}

int main()
{
    int vec[5];
    cadastrarNumeros(vec);

    cout << "Vetor de Crescente" << endl;
    ordemCrescenteVetor(vec);

    return 0;
}