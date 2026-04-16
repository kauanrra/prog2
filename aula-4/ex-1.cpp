#include <iostream>

using namespace std;

struct data {
    int dia;
    int mes;
    int ano;
};

int main() {
    data dataAtual;

    cout << "Digite o dia atual: ";
    cin >> dataAtual.dia;
    
    cout << "Digite o mes atual: ";
    cin >> dataAtual.mes;
    
    cout << "Digite o ano atual: ";
    cin >> dataAtual.ano;

    cout << "\nA data informada e: " << dataAtual.dia << " / " 
         << dataAtual.mes << " / " << dataAtual.ano << endl;

    return 0;
}
