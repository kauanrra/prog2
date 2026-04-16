#include <iostream>
#include <iomanip> // Para formatar o saldo com 2 casas decimais

int main() {
    float saldo = 1000.0;
    int opcao;
    float valor;

    do {
        std::cout << "\n--- CAIXA ELETRONICO ---" << std::endl;
        std::cout << "1. Ver Saldo\n2. Depositar\n3. Sacar\n4. Sair" << std::endl;
        std::cout << "Escolha uma opcao: ";
        std::cin >> opcao;

        switch (opcao) {
            case 1:
                std::cout << "Saldo atual: R$ " << std::fixed << std::setprecision(2) << saldo << std::endl;
                break;
            case 2:
                std::cout << "Valor do deposito: ";
                std::cin >> valor;
                if (valor > 0) {
                    saldo += valor;
                    std::cout << "Deposito realizado com sucesso!" << std::endl;
                } else {
                    std::cout << "Erro: Valor de deposito deve ser positivo." << std::endl;
                }
                break;
            case 3:
                std::cout << "Valor do saque: ";
                std::cin >> valor;
                if (valor > 0 && valor <= saldo) {
                    saldo -= valor;
                    std::cout << "Saque realizado com sucesso!" << std::endl;
                } else {
                    std::cout << "Erro: Saldo insuficiente ou valor invalido." << std::endl;
                }
                break;
            case 4:
                std::cout << "Saindo... Ate logo!" << std::endl;
                break;
            default:
                std::cout << "Opcao invalida. Tente novamente." << std::endl;
        }
    } while (opcao != 4);

    return 0;
}
