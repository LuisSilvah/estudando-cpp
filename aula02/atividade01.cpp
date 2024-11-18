
#include <iostream>


int main() {

    int m[5][3];
    int t[3][5];

    for (int i = 0; i< 5; i++) {
        for (int j = 0; j<3; j++) {
            // printf ("%d", i);
            // printf ("%d", j);
            std::cout << "Digite os valores da posição: " << i << " - " << j << std::endl;
            std::cin >> m[i][j];
        }
    }

    std::cout << m[5][3];

    return 0;
     
}