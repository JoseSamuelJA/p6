#include <iostream>
#include <string>

class Pelicula {
private:
    std::string titulo;
    std::string director;
    std::añoLanzamiento;

public:
    Pelicula() {
        std::cout << "Ingrese el título de la película: ";
        std::getline(std::cin, titulo);

        std::cout << "Ingrese el director de la película: ";
        std::getline(std::cin, director);

        std::cout << "Ingrese el año de lanzamiento de la película: ";
        std::cin >> añoLanzamiento;
    }

    std::string obtenerTitulo() {
        return titulo;
    }

    std::string obtenerDirector() {
        return director;
    }

    int obtenerAñoLanzamiento() {
        return añoLanzamiento;
    }
    void mostrarInformacion() {
        std::cout << "Título: " << titulo << std::endl;
        std::cout << "Director: " << director << std::endl;
        std::cout << "Año de lanzamiento: " << añoLanzamiento << std::endl;
    }
};

int main() {
    Pelicula pelicula;

    pelicula.mostrarInformacion();

    return 0;
}
