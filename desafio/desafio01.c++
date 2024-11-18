#include <iostream>

using namespace std;

int main()
{
    int N = 3;

    double m[N][N], adj[N][N], mInversa[N][N], solucao[N], igualdade[N];
    double det;
    int i, j;

    cout << "Digite os valores da matriz" << endl;
    for (i = 0; i < N; i++)
    {
        for (j = 0; j < N; j++)
        {
            cin >> m[i][j];
        }
    }

    cout << "Digite os valores do vetor da igualdade" << endl;
    for (i = 0; i < N; i++)
    {
        cin >> igualdade[i];
    }


    // Determinante

    // cout << "Determinante da Matriz" << endl;
    det = (m[0][0] * m[1][1] * m[2][2] +
           m[0][1] * m[1][2] * m[2][0] + 
           m[0][2] * m[1][0] * m[2][1] - 
           m[0][0] * m[1][2] * m[2][1] - 
           m[0][1] * m[1][0] * m[2][2] - 
           m[0][2] * m[1][1] * m[2][0]);
    // cout << det << endl;


    // Adjunta

    // cout << "Adjunta da Matriz" << endl;
    adj[0][0] = (m[1][1] * m[2][2]) - (m[1][2] * m[2][1]);
    adj[0][1] = (m[0][2] * m[2][1]) - (m[0][1] * m[2][2]);
    adj[0][2] = (m[0][1] * m[1][2]) - (m[0][2] * m[1][1]);
    adj[1][0] = (m[1][2] * m[2][0]) - (m[1][0] * m[2][2]);
    adj[1][1] = (m[0][0] * m[2][2]) - (m[0][2] * m[2][0]);
    adj[1][2] = (m[0][2] * m[1][0]) - (m[0][0] * m[1][2]);
    adj[2][0] = (m[1][0] * m[2][1]) - (m[1][1] * m[2][0]);
    adj[2][1] = (m[0][1] * m[2][0]) - (m[0][0] * m[2][1]);
    adj[2][2] = (m[0][0] * m[1][1]) - (m[0][1] * m[1][0]);

    // for (i = 0; i < N; i++)
    // {
    //     for (j = 0; j < N; j++)
    //         cout << adj[i][j] << "\t ";
    // }

    cout << "Matriz inversa" << endl;
    for (i = 0; i < N; i++)
    {
        for (j = 0; j < N; j++)
        {
            mInversa[i][j] = adj[i][j] / det;
        }
    }

    cout << "Solução" << endl;
        for (int i = 0; i < N; i++){
        solucao[i] = 0;
        for (int j = 0; j < N; j++){
            solucao[i] += mInversa[i][j] * igualdade[j];
        }
    }

    cout << "Vetor Solucao: " << endl;
    for (int i = 0; i < N; i++){
        cout << solucao[i];
        cout << endl;
    }

    return 0;
}