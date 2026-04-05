#include <iostream>
#include <string>

using namespace std;

int main() {
    string nome;
    int idade;
    float altura;

    cout << "Digite o seu nome completo: ";
    getline(cin, nome);

    cout << "Digite a sua idade: ";
    cin >> idade;

    cout << "Digite a sua altura (em metros): ";
    cin >> altura;

    cout << "\n--- Informacoes Registradas ---\n";
    cout << "Nome: " << nome << "\n";
    cout << "Idade: " << idade << " anos\n";
    cout << "Altura: " << altura << " m\n";

    return 0;
}
