#include <iostream>

int main() {
    int num, soma = 0;

    std::cout << "Digite um numero inteiro positivo: ";
    std::cin >> num;

    if (num <= 0) {
        std::cout << "Por favor, insira apenas numeros positivos." << std::endl;
        return 1;
    }

    // Loop para encontrar divisores
    for (int i = 1; i < num; i++) {
        if (num % i == 0) {
            soma += i;
        }

        // Regra de parada: se a soma ja passou o numero, nao pode ser perfeito
        if (soma > num) {
            break;
        }
    }

    if (soma == num) {
        std::cout << num << " e um numero perfeito." << std::endl;
    } else {
        std::cout << num << " nao e um numero perfeito." << std::endl;
    }

    return 0;
}
