#include <iostream>
#include <string>

class Libro {
private:
    std::string titulo;
    std::string autor;
    int a�oPublicacion;

public:
    // Constructor por defecto
    Libro() {}

    // M�todos para establecer los datos del libro
    void establecerTitulo(std::string titulo) {
        this->titulo = titulo;
    }

    void establecerAutor(std::string autor) {
        this->autor = autor;
    }

    void establecerA�oPublicacion(int a�o) {
        this->a�oPublicacion = a�o;
    }

    // M�todos para obtener los datos del libro
    std::string obtenerTitulo() const {
        return titulo;
    }

    std::string obtenerAutor() const {
        return autor;
    }

    int obtenerA�oPublicacion() const {
        return a�oPublicacion;
    }

    // M�todo para ingresar la informaci�n del libro desde el usuario
    void ingresarInformacion() {
        std::cout << "Ingrese el t�tulo del libro: ";
        std::getline(std::cin, this->titulo);

        std::cout << "Ingrese el autor del libro: ";
        std::getline(std::cin, this->autor);

        std::cout << "Ingrese el a�o de publicaci�n del libro: ";
        std::cin >> this->a�oPublicacion;

        std::cin.ignore(); // Limpiar el buffer de entrada despu�s de leer un n�mero
    }

    // M�todo para mostrar la informaci�n del libro
    void mostrarInformacion() const {
        std::cout << "\nInformaci�n del libro:\n";
        std::cout << "T�tulo: " << titulo << std::endl;
        std::cout << "Autor: " << autor << std::endl;
        std::cout << "A�o de publicaci�n: " << a�oPublicacion << std::endl;
    }
};

int main() {
    // Crear un objeto Libro
    Libro libro;

    // Ingresar la informaci�n del libro desde el usuario
    libro.ingresarInformacion();

    // Mostrar la informaci�n del libro
    libro.mostrarInformacion();

    return 0;
}
