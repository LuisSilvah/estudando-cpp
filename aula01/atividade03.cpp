// Leia o salário mensal atual de um funcionário e o percentual de
// reajuste e determine o valor do novo salário

#include <iostream>

int main() {

    int salario;
    int percentual;

    std::cout << "Digite o salário atual e o percentura % de reajuste: ";
    std::cin >> salario >> percentual;

    int novoSalario = salario + (salario*percentual) / 100;

    std::cout << "Novo salário:" << novoSalario << std::endl;

    return 0;
}