// Calcule o volume do cubo

#include <iostream>
#include <math.h>

int main () {

    double lado;

    std::cout << "Digite o lado do cubo: ";
    std::cin >> lado;   

    // int volume = (lado*lado)*lado;

    double volume = pow(lado, 3.0);

    std::cout << "Volume do cubo: " << volume << std::endl;


    return 0;
}