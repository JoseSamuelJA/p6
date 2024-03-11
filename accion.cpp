#include <iostream>
#include <string>

class Pelicula {
private:
    std::string titulo;
    std::string director;
    std::a�oLanzamiento;

public:
    Pelicula() {
        std::cout << "Ingrese el t�tulo de la pel�cula: ";
        std::getline(std::cin, titulo);

        std::cout << "Ingrese el director de la pel�cula: ";
        std::getline(std::cin, director);

        std::cout << "Ingrese el a�o de lanzamiento de la pel�cula: ";
        std::cin >> a�oLanzamiento;
    }

    std::string obtenerTitulo() {
        return titulo;
    }

    std::string obtenerDirector() {
        return director;
    }

    int obtenerA�oLanzamiento() {
        return a�oLanzamiento;
    }
    void mostrarInformacion() {
        std::cout << "T�tulo: " << titulo << std::endl;
        std::cout << "Director: " << director << std::endl;
        std::cout << "A�o de lanzamiento: " << a�oLanzamiento << std::endl;
    }
};

int main() {
    Pelicula pelicula;

    pelicula.mostrarInformacion();

    return 0;
}
