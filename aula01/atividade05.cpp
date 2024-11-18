// Elabore um programa que dada uma distância percorrida (em
// quilômetros), bem como o total de combustível gasto (em litros),
// informe o consumo do veículo

#include <iostream>

int main () {

    float distancia;
    float gastoLitros;

    std::cout << "Digite a distância percorrida (KM) e o total de gasto (litros): ";
    std::cin >> distancia >> gastoLitros;

    float consumo = distancia/gastoLitros;

    std::cout << "Consumo do veiculo foi de: " << consumo << "KMl" << std::endl;

    return 0;
}