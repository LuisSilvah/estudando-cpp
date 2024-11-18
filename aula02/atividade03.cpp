
#include <iostream>
using namespace std;

int main()
{

    int N = 10;

    int vetor[N], i, j, aux;

    for (i = 0; i < N; i++)
    {
        cout << "Digite os valores do vetor: ";
        cin >> vetor[i];
    }

    for (i = 0; i < N - 1; i++)
    {
        for (j = 0; j < N; j++)
        {
            if (vetor[i] > vetor[j])
            {
                aux = vetor[i];
                vetor[i] = vetor[j];
                vetor[j] = aux;
            }
        }
    }

    cout << "Valores em ordem crescente: " << endl;

    for (i = 0; i < N; i++)
    {
        cout << vetor[i];
    }

    return 0;
}