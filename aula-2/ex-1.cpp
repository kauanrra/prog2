#include <iostream>
#include <string>

using namespace std;

int main() {
    string nome;
    int idade;

    cout << "Digite o seu nome completo: ";
    getline(cin, nome);

    cout << "Digite a sua idade: ";
    cin >> idade;

    cout << "\n--- Informacoes do Usuario ---\n";
    cout << "Nome: " << nome << "\n";
    cout << "Idade: " << idade << " anos\n";

    return 0;
}
