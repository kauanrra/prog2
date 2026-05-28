#include <iostream>
#include <list>

using namespace std;

int main() {
    list<int> itens;
    int opcao, valor;

    do {
        cin >> opcao;

        if (opcao == 1) {
            cin >> valor;
            itens.push_front(valor);
        } else if (opcao == 2) {
            cin >> valor;
            itens.push_back(valor);
        } else if (opcao == 3) {
            cin >> valor;
            itens.remove(valor);
        } else if (opcao == 4) {
            cout << itens.size() << "\n";
        }
    } while (opcao != 0);

    return 0;
}
