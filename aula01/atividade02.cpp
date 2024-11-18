// Determine a área de um triângulo

#include <iostream>

int main() {
   
    int base;
    int altura;
   
    std::cout << "Determine a área do triângulo: ";
    std::cin >> base >> altura;
    
    
    int area = base * altura;

    std::cout << "Altura do triangulo é:  " << area << std::endl;
    

    return 0;
}