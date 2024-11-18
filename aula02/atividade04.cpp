// Fazer um programa em C para ler um vetor de inteiros positivos
// de 15 posições. Imprimir a quantidade de números pares e a
// quantidade de múltiplos de 5

#include <iostream>
using namespace std;

int main()
{

    int N = 5;

    int vetor[N], i, par, mult;

    for (i = 0; i < N; i++)
    {
    
        cout << "Digite os valores do vetor: ";
        cin >> vetor[i];
    }


    for (i=0; i< N; i++) {

        if(vetor[i]%2 == 0) {
            par++;
        }

        if(vetor[i]%5 == 0) {
            mult++;
        }

    }

    cout << "Pares: " << par << endl;
    cout << "Mult 5: " << mult << endl;


    return 0;
}