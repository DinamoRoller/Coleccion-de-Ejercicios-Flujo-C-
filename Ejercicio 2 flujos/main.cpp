#include <iostream>
#include <string>
#include "triangulo.cpp"
#include "circulo.cpp"

namespace Geometria {
    double calcularAreaTriangulo(double base, double altura) {
        return 0.5 * base * altura;
    }
}

namespace Geometria {
    const double PI = 3.141592653589793;

    double calcularAreaCirculo(double radio) {
        return PI * radio * radio;
    }
}



int main() {

    double baseTriangulo = 4.0;
    double alturaTriangulo = 5.0;
    double areaTriangulo = Geometria::calcularAreaTriangulo(baseTriangulo, alturaTriangulo);

    std::cout << "Area del triangulo: " << areaTriangulo << std::endl;

    double radioCirculo = 3.0;
    double areaCirculo = Geometria::calcularAreaCirculo(radioCirculo);


    std::cout << "Area del circulo: " << areaCirculo << std::endl;
    int num;
    std::string text;

    std::cout << "Ingresa un numero: ";
    std::cin >> num;

    std::cout << "Ingrese un texto: ";
    std::cin.ignore();
    std::getline(std::cin, text);

    std::cout << "El numero ingresado es: " << num << "\nEl texto ingresado es: " << text << std::endl;

    return 0;
}