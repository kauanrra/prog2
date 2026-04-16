#include <iostream>
#include <iomanip>

const int ANO = 2;
const int TRIMESTRE = 4;

int main() {
    double despesas[ANO][TRIMESTRE];
    double totalGeral = 0.0;

    for (int i = 0; i < ANO; ++i) {
        std::cout << "--- Digite as despesas para o Ano " << (i + 1) << " ---" << std::endl;
        for (int j = 0; j < TRIMESTRE; ++j) {
            std::cout << "Trimestre " << (j + 1) << ": R$ ";
            std::cin >> despesas[i][j];
            totalGeral += despesas[i][j];
        }
        std::cout << std::endl;
    }

    std::cout << "=========================================" << std::endl;
    std::cout << "           TABELA DE DESPESAS            " << std::endl;
    std::cout << "=========================================" << std::endl;
    
    std::cout << std::fixed << std::setprecision(2);

    for (int i = 0; i < ANO; ++i) {
        std::cout << "ANO " << (i + 1) << ":" << std::endl;
        for (int j = 0; j < TRIMESTRE; ++j) {
            std::cout << "  Trimestre " << (j + 1) << ": R$ " << despesas[i][j] << std::endl;
        }
        std::cout << "-----------------------------------------" << std::endl;
    }

    std::cout << "VALOR TOTAL (2 Anos): R$ " << totalGeral << std::endl;
    std::cout << "=========================================" << std::endl;

    return 0;
}
