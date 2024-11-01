#include <iostream>
#include <cmath>
#include <iomanip>
#include <cstdlib>   // Para rand() y srand()
#include <ctime>     // Para time()

int main() {
    // Parte 1: Calcular dimensiones de una esfera
    double radio;
    std::cout << "Introduce el radio de la esfera: ";
    std::cin >> radio;

    double superficie = 4 * M_PI * std::pow(radio, 2);
    double volumen = (4.0 / 3.0) * M_PI * std::pow(radio, 3);

    std::cout << std::fixed << std::setprecision(2);
    std::cout << "Superficie: " << superficie << std::endl;
    std::cout << "Volumen: " << volumen << std::endl;

    // Parte 2: Calculadora básica
    int num1, num2;
    std::cout << "Introduce el primer numero: ";
    std::cin >> num1;
    std::cout << "Introduce el segundo numero: ";
    std::cin >> num2;

    std::cout << num1 << " + " << num2 << " = " << (num1 + num2) << std::endl;
    std::cout << num1 << " - " << num2 << " = " << (num1 - num2) << std::endl;
    std::cout << num1 << " x " << num2 << " = " << (num1 * num2) << std::endl;
    std::cout << num1 << " / " << num2 << " = " << (num1 / num2) << std::endl;
    std::cout << num1 << " mod " << num2 << " = " << (num1 % num2) << std::endl;

    // Parte 3: Caracteres al reves
    char char1, char2, char3;
    std::cout << "Introduce la primera letra: ";
    std::cin >> char1;
    std::cout << "Introduce la segunda letra: ";
    std::cin >> char2;
    std::cout << "Introduce la tercera letra: ";
    std::cin >> char3;

    std::cout << char3 << std::endl;
    std::cout << char2 << std::endl;
    std::cout << char1 << std::endl;

    // Parte 4: Conversion de centigrados a Kelvin y Fahrenheit
    double celsius;
    std::cout << "Introduce la cantidad de grados centigrados: ";
    std::cin >> celsius;

    double kelvin = celsius + 273.15;
    double fahrenheit = celsius * 9.0 / 5.0 + 32.0;

    std::cout << "Kelvin = " << kelvin << std::endl;
    std::cout << "Fahrenheit = " << fahrenheit << std::endl;

    // Parte 5: Calculo de perimetro, area y diagonal de un rectangulo
    double width, height;
    std::cout << "Introduce el ancho del rectangulo: ";
    std::cin >> width;
    std::cout << "Introduce la altura del rectangulo: ";
    std::cin >> height;

    double perimeter = 2 * (width + height);
    double area = width * height;
    double diagonal = std::sqrt(std::pow(width, 2) + std::pow(height, 2));

    std::cout << std::fixed << std::setprecision(14);
    std::cout << "Perimetro: " << perimeter << std::endl;
    std::cout << "Area: " << area << std::endl;
    std::cout << "Diagonal: " << diagonal << std::endl;

    // Parte 6: Tabla de multiplicar
    int num;
    std::cout << "Introduce un numero: ";
    std::cin >> num;

    for (int i = 1; i <= 10; ++i) {
        std::cout << num << " x " << i << " = " << (num * i) << std::endl;
    }

    // Parte 7: Generar un numero al azar entre dos valores
    int min, max;
    std::cout << "Introduce el primer numero: ";
    std::cin >> min;
    std::cout << "Introduce el segundo numero: ";
    std::cin >> max;

    // Asegurarse de que min sea menor que max
    if (min > max) {
        std::swap(min, max);
    }

    // Inicializar la semilla de numeros aleatorios
    srand(time(0));
    int randomNum = rand() % (max - min + 1) + min;

    std::cout << "Numero al azar entre " << min << " y " << max << ": " << randomNum << std::endl;

    return 0;
}