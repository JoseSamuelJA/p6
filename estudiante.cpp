#include <iostream>
#include <string>

class Estudiante {
private:
    std::string nombre;
    std::string apellido;
    int edad;
    std::string curso;

public:
    // Constructor por defecto
    Estudiante() {}

    // M�todos para establecer los datos del estudiante
    void establecerNombre(std::string nombre) {
        this->nombre = nombre;
    }

    void establecerApellido(std::string apellido) {
        this->apellido = apellido;
    }

    void establecerEdad(int edad) {
        this->edad = edad;
    }

    void establecerCurso(std::string curso) {
        this->curso = curso;
    }

    // M�todos para obtener los datos del estudiante
    std::string obtenerNombre() const {
        return nombre;
    }

    std::string obtenerApellido() const {
        return apellido;
    }

    int obtenerEdad() const {
        return edad;
    }

    std::string obtenerCurso() const {
        return curso;
    }

    // M�todo para ingresar la informaci�n del estudiante desde el usuario
    void ingresarInformacion() {
        std::cout << "Ingrese el nombre del estudiante: ";
        std::getline(std::cin, this->nombre);

        std::cout << "Ingrese el apellido del estudiante: ";
        std::getline(std::cin, this->apellido);

        std::cout << "Ingrese la edad del estudiante: ";
        std::cin >> this->edad;

        std::cin.ignore(); // Limpiar el buffer de entrada despu�s de leer un n�mero

        std::cout << "Ingrese el curso del estudiante: ";
        std::getline(std::cin, this->curso);
    }

    // M�todo para mostrar la informaci�n del estudiante
    void mostrarInformacion() const {
        std::cout << "\nInformaci�n del estudiante:\n";
        std::cout << "Nombre: " << nombre << std::endl;
        std::cout << "Apellido: " << apellido << std::endl;
        std::cout << "Edad: " << edad << std::endl;
        std::cout << "Curso: " << curso << std::endl;
    }
};

int main() {
    // Crear un objeto Estudiante
    Estudiante estudiante;

    // Ingresar la informaci�n del estudiante desde el usuario
    estudiante.ingresarInformacion();

    // Mostrar la informaci�n del estudiante
    estudiante.mostrarInformacion();

    return 0;
}
