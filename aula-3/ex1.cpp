#include <iostream>

int main() {
    int idade, autorizacao, nivel;

    std::cout << "Digite a idade: ";
    std::cin >> idade;
    std::cout << "Possui autorizacao? (1-Sim / 0-Nao): ";
    std::cin >> autorizacao;
    std::cout << "Digite o nivel de acesso (1 a 3): ";
    std::cin >> nivel;

    if (idade < 16) {
        std::cout << "Acesso Negado: Usuario muito jovem." << std::endl;
    } 
    else if (idade >= 16 && idade <= 17) {
        if (autorizacao == 1) {
            std::cout << "Acesso Permitido sob autorizacao." << std::endl;
        } else {
            std::cout << "Acesso Negado: Falta autorizacao dos responsaveis." << std::endl;
        }
    } 
    else { // Idade >= 18
        switch (nivel) {
            case 1:
                std::cout << "Acesso Permitido: Nivel BASICO." << std::endl;
                break;
            case 2:
                std::cout << "Acesso Permitido: Nivel INTERMEDIARIO." << std::endl;
                break;
            case 3:
                std::cout << "Acesso Permitido: Nivel TOTAL." << std::endl;
                break;
            default:
                std::cout << "Erro: Nivel invalido selecionado." << std::endl;
                break;
        }
    }

    return 0;
}
