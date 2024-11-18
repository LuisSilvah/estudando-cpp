// Faça um programa que peça um número inteiro positivo e em
// seguida mostre este número invertido.
// Exemplo: 2349 -> Número Invertido 9432

#include <iostream>
using namespace std;

int main()
{

    int numInt = 0;
    int rev;

    cout << "Digite um numero Inteiro: " << endl;
    cin >> numInt;

    while (numInt > 0)
    {

        int numDigit = numInt % 10;
        rev = (rev * 10) + numDigit;

        numInt /= 10;
    }

    cout << "Inverso eh: " << rev << endl;

    return 0;
}