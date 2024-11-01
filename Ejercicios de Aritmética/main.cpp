#include <iostream>
#include <stdexcept>

int main() {
    // Parte 1: Sumas al Cuadrado
    int x;
    std::cout << "Introduce un numero entero: ";
    std::cin >> x;
    std::cout << x << " * " << x << " = " << (x * x) << std::endl;

    // Parte 2: Multiplicación de Tres Factores
    int a, b, c;
    std::cout << "Introduce el primer numero: ";
    std::cin >> a;
    std::cout << "Introduce el segundo numero: ";
    std::cin >> b;
    std::cout << "Introduce el tercer numero: ";
    std::cin >> c;
    std::cout << "Resultado de la multiplicacion: " << (a * b * c) << std::endl;

    // Parte 3: División y Módulo de División
    int y;
    std::cout << "Introduce el dividendo: ";
    std::cin >> x;
    std::cout << "Introduce el divisor: ";
    std::cin >> y;
    std::cout << "Division entera: " << (x / y) << std::endl;
    std::cout << "Resto de la division: " << (x % y) << std::endl;

    // Parte 4: División entre Cero
    std::cout << "Introduce el dividendo: ";
    std::cin >> x;
    std::cout << "Introduce el divisor: ";
    std::cin >> y;
    try {
        if (y == 0) {
            throw std::runtime_error("No se puede dividir por 0");
        }
        std::cout << "Resultado de la division: " << (x / y) << std::endl;
    } catch (const std::runtime_error& e) {
        std::cout << e.what() << std::endl;
    }

    // Parte 5: Operaciones Aritméticas
    std::cout << "Introduce un numero entero: ";
    std::cin >> x;
    std::cout << (-6 + x * 5) << std::endl;
    std::cout << ((13 - 2) * x) << std::endl;
    std::cout << ((x + -2) * (20 / 10)) << std::endl;
    std::cout << ((12 + x) / (5 - 4)) << std::endl;

    // Parte 6: Media Aritmética
    int n1, n2, n3, n4;
    std::cout << "Introduce el primer numero: ";
    std::cin >> n1;
    std::cout << "Introduce el segundo numero: ";
    std::cin >> n2;
    std::cout << "Introduce el tercer numero: ";
    std::cin >> n3;
    std::cout << "Introduce el cuarto numero: ";
    std::cin >> n4;
    std::cout << "Media aritmetica: " << ((n1 + n2 + n3 + n4) / 4) << std::endl;

    // Parte 7: Operaciones Combinadas
    std::cout << "Introduce el primer numero: ";
    std::cin >> a;
    std::cout << "Introduce el segundo numero: ";
    std::cin >> b;
    std::cout << "Introduce el tercer numero: ";
    std::cin >> c;
    std::cout << "Resultado de (a + b) * c: " << ((a + b) * c) << std::endl;
    std::cout << "Resultado de (a * c + b * c): " << (a * c + b * c) << std::endl;

    return 0;
}
