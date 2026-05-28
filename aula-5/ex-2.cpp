#include <iostream>

using namespace std;

int main() {
    double a[100];
    double* aPtr = a;
    int qtd = 0;
    double soma = 0.0;

    cout << "Quantidade de valores (max 100): ";
    cin >> qtd;

    if (qtd > 100) {
        qtd = 100;
    }

    for (int j = 0; j < qtd; ++j) {
        cin >> *(a + j);
    }

    for (int j = 0; j < qtd; ++j) {
        soma += *(aPtr + j);
    }

    cout << "Soma: " << soma << "\n";
    
    if (qtd > 0) {
        cout << "Media: " << soma / qtd << "\n";
    }

    return 0;
}
