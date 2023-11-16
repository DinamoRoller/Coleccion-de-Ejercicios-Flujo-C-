#include <iostream>
#include <iomanip>
#include "fisica.cpp"

namespace Ciencia {
    namespace Fisica {
        const double velocidadDeLaLuz = 299792458.0;

        double calcularEnergia(double masa){
            return masa * velocidadDeLaLuz * velocidadDeLaLuz;
        }
    }
}

int main() {

    double masa;
    std::cout << "Ingresa un masa en kg: ";
    std::cin >> masa;

    double energia = Ciencia::Fisica::calcularEnergia(masa);

    std::cout << "La energia correspondiente a un masa de " << masa << " kg es: " << std::fixed << std::setprecision(2) << energia << " Julios\n";

    return 0;
}