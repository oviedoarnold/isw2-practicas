#include <iostream>
#include <string>

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

    if (edad >= 18) {
        if (salario > 15000) {
            std::cout << nombre << " es mayor de edad" << std::endl;
            std::cout << "Tiene un salario alto" << std::endl;
            std::cout << "Salario con bono: "
                      << salario + (salario * 0.10) << std::endl;
        } else {
            std::cout << nombre << " es mayor de edad" << std::endl;
            std::cout << "Tiene un salario bajo" << std::endl;
            std::cout << "Salario con bono: "
                      << salario + (salario * 0.05) << std::endl;
        }
    } else {
        std::cout << nombre << " es menor de edad" << std::endl;
        std::cout << "No puede recibir bono" << std::endl;
    }

    if (salario > 15000) {
        std::cout << "Categoría: A" << std::endl;
    } else {
        std::cout << "Categoría: B" << std::endl;
    }

    return 0;
}
