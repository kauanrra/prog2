#include <iostream>

int soma(int a, int b) {
    return a + b;
}

int main() {
    int valor1, valor2;

    std::cout << "Digite o primeiro valor inteiro: ";
    std::cin >> valor1;
    
    std::cout << "Digite o segundo valor inteiro: ";
    std::cin >> valor2;

    int resultado = soma(valor1, valor2);

    std::cout << "\nA soma dos valores e: " << resultado << std::endl;

    return 0;
}
