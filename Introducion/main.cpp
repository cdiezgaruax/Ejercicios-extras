#include <iostream>
#include <string>

int main() {
    // Parte 1: Hola Mundo
    std::cout << "Hola mundo!" << std::endl;

    // Parte 2: Hola seguido del nombre en lineas separadas
    std::cout << "Hola" << std::endl;
    std::cout << "Carlos" << std::endl;

    // Parte 3: Leer entrada del usuario
    std::string animal;
    std::cout << "Cual es tu animal favorito?" << std::endl;
    std::getline(std::cin, animal);
    std::cout << "El mio tambien!" << std::endl;

    // Parte 4: Almacenar entrada del usuario
    std::string x;
    std::cout << "Como te llamas?" << std::endl;
    std::cin >> x;
    std::cout << "Encantado de conocerte, " << x << std::endl;

    return 0;
}