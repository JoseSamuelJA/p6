#include <iostream>
#include <string>

class CuentaBancaria {
private:
    std::string nombreTitular;
    std::string numeroCuenta;
    float saldo;

public:
    CuentaBancaria(std::string nombre, std::string numero) : nombreTitular(nombre), numeroCuenta(numero), saldo(0) {}

    void depositar(float cantidad) {
        saldo += cantidad;
        std::cout << "Se depositaron " << cantidad << " quetzales. Saldo actual: " << saldo << " quetzales\n";
    }

    void retirar(float cantidad) {
        if (cantidad <= saldo) {
            saldo -= cantidad;
            std::cout << "Se retiraron " << cantidad << " quetzales. Saldo actual: " << saldo << " quetzales\n";
        } else {
            std::cout << "No hay suficiente saldo para realizar el retiro\n";
        }
    }

    float consultarSaldo() {
        return saldo;
    }
};

int main() {
    std::string nombre, numeroCuenta;
    float cantidadDeposito;

    std::cout << "Ingrese el nombre del titular de la cuenta: ";
    std::getline(std::cin, nombre);

    std::cout << "Ingrese el numero de cuenta: ";
    std::getline(std::cin, numeroCuenta);

    CuentaBancaria cuenta(nombre, numeroCuenta);

    std::cout << "Ingrese la cantidad a depositar: ";
    std::cin >> cantidadDeposito;
    cuenta.depositar(cantidadDeposito);

    float cantidadRetiro;
    std::cout << "Ingrese la cantidad a retirar: ";
    std::cin >> cantidadRetiro;
    cuenta.retirar(cantidadRetiro);

    std::cout << "Saldo actual: " << cuenta.consultarSaldo() << " quetzales\n";

    return 0;
}
