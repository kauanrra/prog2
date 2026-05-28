#include <iostream>
#include <string>

using namespace std;

class Gato {
private:
    string nome;
    int idade;
    double peso;

public:
    Gato(string n, int i, double p) : nome(n), idade(i), peso(p) {
        if (peso <= 0) {
            peso = 1.0; 
        }
    }

    void setPeso(double p) {
        if (p > 0) {
            peso = p;
        }
    }

    double getPeso() const {
        return peso;
    }

    string getNome() const {
        return nome;
    }

    int getIdade() const {
        return idade;
    }
};
