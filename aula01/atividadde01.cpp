// Leia um número inteiro e imprima o seu antecessor e seu
// sucessor

#include <iostream>

int main() {
   
    int num;
   
    std::cout << "Digite um número inteiro: ";
    std::cin >> num;
    
    int ant = num - 1;
    int suc = num + 1;
    
    std::cout << "O número antecessor é: " << ant << std::endl;
    std::cout << "O número sucessor é: " << suc << std::endl;
    

    return 0;
}