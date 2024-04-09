#include <iostream>
#include <string>
using namespace std;

class Persona {
private:
    string nombre;
    int edad;
    string ocupacion;

public:
    Persona(string nombre, int edad, string ocupacion) {
        this->nombre = nombre;
        this->edad = edad;
        this->ocupacion = ocupacion;
    }

    void mostrarInfo() {
        cout << "Nombre: " << nombre << endl;
        cout << "Edad: " << edad << endl;
        cout << "Ocupacion: " << ocupacion << endl;
    }
};

int main() {
    // Instanciacion de objetos utilizando la clase Persona
    Persona persona1("Ximena", 20, "Ingeniera Civil");
    Persona persona2("Dayrin", 23, "Psicologa");

    // Mostrar informacion de las personas
    cout << "Informacion de la persona 1:" << endl;
    persona1.mostrarInfo();
    cout << endl;

    cout << "Informacion de la persona 2:" << endl;
    persona2.mostrarInfo();
    cout << endl;

    return 0;
}
