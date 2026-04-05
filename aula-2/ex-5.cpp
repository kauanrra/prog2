#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

int main() {
    string nome;
    int idade;
    float nota1, nota2, nota3, media;

    cout << "Digite o nome completo do aluno: ";
    getline(cin, nome);

    cout << "Digite a idade: ";
    cin >> idade;

    cout << "Digite a primeira nota: ";
    cin >> nota1;

    cout << "Digite a segunda nota: ";
    cin >> nota2;

    cout << "Digite a terceira nota: ";
    cin >> nota3;

    media = (nota1 + nota2 + nota3) / 3.0f;

    cout << "\n--- Relatorio do Aluno ---\n";
    cout << "Nome:  " << nome << "\n";
    cout << "Idade: " << idade << " anos\n";
    cout << "Notas: " << nota1 << ", " << nota2 << ", " << nota3 << "\n";
    cout << "Media: " << fixed << setprecision(2) << media << "\n";

    return 0;
}
