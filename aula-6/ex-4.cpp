#include <iostream>
#include <stack>
#include <string>

using namespace std;

int main() {
    stack<string> editor;
    string palavra;
    int opcao;

    do {
        cin >> opcao;

        if (opcao == 1) {
            cin >> palavra;
            editor.push(palavra);
        } else if (opcao == 2 && !editor.empty()) {
            cout << editor.top() << "\n";
            editor.pop();
        }
    } while (opcao != 0);

    return 0;
}
