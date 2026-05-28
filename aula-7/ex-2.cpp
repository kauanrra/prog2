#include <iostream>
#include <string>

using namespace std;

class ContaBancaria {
private:
    string numeroConta;
    double saldo;

public:
    ContaBancaria(string numero) : numeroConta(numero), saldo(0.0) {}

    double getSaldo() const {
        return saldo;
    }

    void depositar(double valor) {
        if (valor > 0) {
            saldo += valor;
        }
    }

    void sacar(double valor) {
        if (valor > 0 && valor <= saldo) {
            saldo -= valor;
        }
    }

    string getNumeroConta() const {
        return numeroConta;
    }
};
