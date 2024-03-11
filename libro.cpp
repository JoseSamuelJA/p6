#include <iostream>
#include <string>

class Libro {
private:
    std::string titulo;
    std::string autor;
    int añoPublicacion;

public:
    // Constructor por defecto
    Libro() {}

    // Métodos para establecer los datos del libro
    void establecerTitulo(std::string titulo) {
        this->titulo = titulo;
    }

    void establecerAutor(std::string autor) {
        this->autor = autor;
    }

    void establecerAñoPublicacion(int año) {
        this->añoPublicacion = año;
    }

    // Métodos para obtener los datos del libro
    std::string obtenerTitulo() const {
        return titulo;
    }

    std::string obtenerAutor() const {
        return autor;
    }

    int obtenerAñoPublicacion() const {
        return añoPublicacion;
    }

    // Método para ingresar la información del libro desde el usuario
    void ingresarInformacion() {
        std::cout << "Ingrese el título del libro: ";
        std::getline(std::cin, this->titulo);

        std::cout << "Ingrese el autor del libro: ";
        std::getline(std::cin, this->autor);

        std::cout << "Ingrese el año de publicación del libro: ";
        std::cin >> this->añoPublicacion;

        std::cin.ignore(); // Limpiar el buffer de entrada después de leer un número
    }

    // Método para mostrar la información del libro
    void mostrarInformacion() const {
        std::cout << "\nInformación del libro:\n";
        std::cout << "Título: " << titulo << std::endl;
        std::cout << "Autor: " << autor << std::endl;
        std::cout << "Año de publicación: " << añoPublicacion << std::endl;
    }
};

int main() {
    // Crear un objeto Libro
    Libro libro;

    // Ingresar la información del libro desde el usuario
    libro.ingresarInformacion();

    // Mostrar la información del libro
    libro.mostrarInformacion();

    return 0;
}
