#include <iostream>
#include <iomanip>

using namespace std;

struct Resultado {
    int totalVotos;
    double percentual;
};

int main() {
    int votos[5] = {0, 0, 0, 0, 0};
    int voto;
    int totalVotosValidos = 0;

    cout << "Digite o numero do candidato (1 a 5) ou 0 para encerrar:\n";

    while (true) {
        cout << "Voto: ";
        cin >> voto;

        if (voto == 0) {
            break;
        }

        if (voto >= 1 && voto <= 5) {
            votos[voto - 1]++;
            totalVotosValidos++;
        } else {
            cout << "Voto invalido. Digite um numero de 1 a 5, ou 0 para sair.\n";
        }
    }

    Resultado resultados[5];

    for (int i = 0; i < 5; i++) {
        resultados[i].totalVotos = votos[i];
        
        if (totalVotosValidos > 0) {
            resultados[i].percentual = (votos[i] * 100.0) / totalVotosValidos;
        } else {
            resultados[i].percentual = 0.0;
        }
    }

    cout << "\n--- RESULTADO DA ELEICAO ---\n";
    cout << fixed << setprecision(2);

    for (int i = 0; i < 5; i++) {
        cout << "Candidato " << (i + 1) << ": " 
             << resultados[i].totalVotos << " votos (" 
             << resultados[i].percentual << "%)\n";
    }
    
    cout << "Total de votos validos: " << totalVotosValidos << "\n";

    return 0;
}
