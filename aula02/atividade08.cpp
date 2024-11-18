#include <iostream>
using namespace std;

int main()
{

    int N = 3;

    int vet[N], inv[N], i;
    int aux= 0;

    for (i = 0; i < N; i++)
    {

        cout << "Digite o valor do vetor: " << endl;
        cin >> vet[i];
    }

    // Inverter vetor

    for (i = N; i >= 0; i--)
    {
        inv[aux] = vet[i];
        aux++;
    }

    for (i = 1; i < N+1; i++)
    {
        cout << endl << inv[i] << endl;
    }

    return 0;
}