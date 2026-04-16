#include <iostream>
#include <iomanip>

inline double converterParaReais(double dolares, double taxaCambio) {
    return dolares * taxaCambio;
}

int main() {
    double dolares;
    const double TAXA_CAMBIO = 5.25; 

    std::cout << "Digite a quantia em dolares (USD): ";
    std::cin >> dolares;

    double reais = converterParaReais(dolares, TAXA_CAMBIO);

    std::cout << std::fixed << std::setprecision(2);
    std::cout << "\nA quantia convertida e: R$ " << reais << std::endl;

    return 0;
}
