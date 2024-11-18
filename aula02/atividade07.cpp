#include <iostream>
using namespace std;

int main()
{

    int N = 3;

    int mat[N][N], vet[N], i, j;
    int res[N] = {0, 0, 0};

    cout << "Digite os valores da Matriz: " << endl;

    for (i = 0; i < N; i++)
    {
        for (j = 0; j < N; j++)
        {
            cin >> mat[i][j];
        }
    }

    cout << "Digite os valores do Vetor: " << endl;

    for (i = 0; i < N; i++)
    {
        cin >> vet[i];
    }

    // Multiplicação de Matriz x Vetor

    for (i = 0; i < N; i++)
    {
        for (j = 0; j < N; j++)
        {
            res[i] += mat[i][j] * vet[j];
        }
    }

    for (i = 0; i < N; i++)
    {
        cout << res[i];
    }

    return 0;
}