#include <iostream>
#include <string>

using namespace std;

int main() {
    string n;
    int e;
    double s;

    cout << "Nombre: ";
    cin >> n;

    cout << "Edad: ";
    cin >> e;

    cout << "Salario: ";
    cin >> s;

    if (e >= 18) {
        if (s > 15000) {
            cout << n << " es mayor de edad" << endl;
            cout << "Tiene un salario alto" << endl;
            cout << "Salario con bono: " << s + (s * 0.10) << endl;
        } else {
            cout << n << " es mayor de edad" << endl;
            cout << "Tiene un salario bajo" << endl;
            cout << "Salario con bono: " << s + (s * 0.05) << endl;
        }
    } else {
        cout << n << " es menor de edad" << endl;
        cout << "No puede recibir bono" << endl;
    }

    if (s > 15000) {
        cout << "Categoría: A" << endl;
    } else {
        cout << "Categoría: B" << endl;
    }

    return 0;
}
