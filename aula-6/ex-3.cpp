#include <iostream>
#include <queue>
#include <string>

using namespace std;

int main() {
    queue<string> filaDocumentos;
    string doc;
    int opcao;

    do {
        cin >> opcao;

        if (opcao == 1) {
            cin >> doc;
            filaDocumentos.push(doc);
        } else if (opcao == 2 && !filaDocumentos.empty()) {
            cout << filaDocumentos.front() << "\n";
            filaDocumentos.pop();
        }
    } while (opcao != 0);

    return 0;
}
