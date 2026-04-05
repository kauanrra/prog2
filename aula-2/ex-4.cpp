#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

int main() {
    string nome;
    double salario;

    cout << "Digite o nome: ";
    getline(cin, nome);

    cout << "Digite o salario: ";
    cin >> salario;

    cout << "\n--- Dados Registrados ---\n";
    cout << left << setw(10) << "Nome:" << nome << "\n";
    cout << left << setw(10) << "Salario:" << "R$ " << fixed << setprecision(2) << salario << "\n";

    return 0;
}
