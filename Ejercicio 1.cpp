#include <iostream>
#include <string>

const int EDAD_MINIMA = 18;
const double LIMITE_SALARIO_ALTO = 15000.0;
const double BONO_SALARIO_ALTO = 0.10;
const double BONO_SALARIO_BAJO = 0.05;

double calcularBono(double salario) {
    if (salario > LIMITE_SALARIO_ALTO) {
        return salario * BONO_SALARIO_ALTO;
    }

    return salario * BONO_SALARIO_BAJO;
}

int main() {
    std::string nombre;
    int edad;
    double salario;

    std::cout << "Nombre: ";
    std::cin >> nombre;

    std::cout << "Edad: ";
    std::cin >> edad;

    std::cout << "Salario: ";
    std::cin >> salario;

    if (edad >= EDAD_MINIMA) {
        if (salario > LIMITE_SALARIO_ALTO) {
            std::cout << nombre << " es mayor de edad" << std::endl;
            std::cout << "Tiene un salario alto" << std::endl;
            std::cout << "Salario con bono: "
                      << salario + calcularBono(salario)
                      << std::endl;
        } else {
            std::cout << nombre << " es mayor de edad" << std::endl;
            std::cout << "Tiene un salario bajo" << std::endl;
            std::cout << "Salario con bono: "
                      << salario + calcularBono(salario)
                      << std::endl;
        }
    } else {
        std::cout << nombre << " es menor de edad" << std::endl;
        std::cout << "No puede recibir bono" << std::endl;
    }

    if (salario > LIMITE_SALARIO_ALTO) {
        std::cout << "Categoria: A" << std::endl;
    } else {
        std::cout << "Categoria: B" << std::endl;
    }

    return 0;
}