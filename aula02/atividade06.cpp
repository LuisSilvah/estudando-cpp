// Elabore um programa que leia uma matriz de reais 10x10 e
// determine:
// • A soma da linha 4.
// • O menor elemento da coluna 5.
// • O maior elemento da diagonal principal.

#include <iostream>
using namespace std;

int main()
{

    int N = 3;

    int mat[N][N], i, j;

    int soma, maior, aux;

    for (i = 0; i < N; i++)
    {
        for (j = 0; j < N; j++)
        {
            cout << "Digite os valores da Matriz: ";
            cin >> mat[i][j];
        }
    }


    int menor = mat[0][1];

    for (i = 0; i < N; i++)
    {
        for (j = 0; j < N; j++)
        {
            if (i == 2)
            {
                soma += mat[i][j];
            }

            if (j == 1)
            {

                if (mat[i][j] < menor)
                {
                    menor = mat[i][j];
                }
            }

            if (i == j)
            {
                aux = mat[i][j];

                if (aux > maior)
                {
                    maior = mat[i][j];
                }
            }
        }
    }

    cout << soma << endl;
    cout << menor << endl;
    cout << maior << endl;

    return 0;
}