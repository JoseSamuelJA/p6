#include <iostream>

class Calculadora {
private:
    float numero1;
    float numero2;

public:
    // Constructor que permite al usuario ingresar los números
    Calculadora() {
        std::cout << "Ingrese el primer numero: ";
        std::cin >> numero1;

        std::cout << "Ingrese el segundo numero: ";
        std::cin >> numero2;
    }

    // Métodos para realizar operaciones básicas
    float suma() {
        return numero1 + numero2;
    }

    float resta() {
        return numero1 - numero2;
    }

    float multiplicacion() {
        return numero1 * numero2;
    }

    float division() {
        if (numero2 != 0) {
            return numero1 / numero2;
        } else {
            std::cout << "Error: División por cero\n";
            return 0;
        }
    }
};

int main() {
    // Crear un objeto Calculadora y permitir que el usuario ingrese los números
    Calculadora calc;

    // Realizar operaciones
    std::cout << "Suma: " << calc.suma() << std::endl;
    std::cout << "Resta: " << calc.resta() << std::endl;
    std::cout << "Multiplicacion: " << calc.multiplicacion() << std::endl;
    std::cout << "División: " << calc.division() << std::endl;

    return 0;
}
