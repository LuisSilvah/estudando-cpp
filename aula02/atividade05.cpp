//  Matriz de identidade

//  1 0 0
//  0 1 0
//  0 0 1

#include <iostream>
using namespace std;

int main()
{

    int N = 3;

    int dent[N][N], i, j;

    for (i = 0; i < N; i++)
    {
        for (j = 0; j < N; j++)
        {

            if (i == j)
            {
                dent[i][j] = 1;
            }
            else
            {
                dent[i][j] = 0;
            }
        }
    }

    for (i = 0; i < N; i++)
    {
        for (j = 0; j < N; j++)
            cout << dent[i][j];
    }

    return 0;
}