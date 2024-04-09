#include <iostream>
#include <string>
using namespace std;

class Persona {
private:
    string nombre;
    int edad;
    string ocupacion;

public:
    // Constructor
    Persona(string nombre, int edad, string ocupacion) {
        this->nombre = nombre;
        this->edad = edad;
        this->ocupacion = ocupacion;
    }

    // Métodos para establecer los valores de los atributos
    void setNombre(string nombre) {
        this->nombre = nombre;
    }

    void setEdad(int edad) {
        this->edad = edad;
    }

    void setOcupacion(string ocupacion) {
        this->ocupacion = ocupacion;
    }

    // Métodos para obtener los valores de los atributos
    string getNombre() {
        return nombre;
    }

    int getEdad() {
        return edad;
    }

    string getOcupacion() {
        return ocupacion;
    }

    // Metodo para mostrar la informacion de la persona
    void mostrarInfo() {
        cout << "Nombre: " << nombre << endl;
        cout << "Edad: " << edad << endl;
        cout << "Ocupacion: " << ocupacion << endl;
    }
};

int main() {
    // Crear objetos de la clase Persona
    Persona persona1("Ximena", 20, "Ingeniera Civil");
    Persona persona2("Dayrin", 23, "Psicologa");

    // Mostrar informacion inicial de las personas
    cout << "Informacion inicial de la persona 1:" << endl;
    persona1.mostrarInfo();
    cout << endl;

    cout << "Informacion inicial de la persona 2:" << endl;
    persona2.mostrarInfo();
    cout << endl;

    // Modificar la informacion de las personas
    persona1.setEdad(35);
    persona2.setOcupacion("Derecho");

    // Mostrar informacion actualizada de las personas
    cout << "Informacion actualizada de la persona 1:" << endl;
    persona1.mostrarInfo();
    cout << endl;

    cout << "Informacion actualizada de la persona 2:" << endl;
    persona2.mostrarInfo();
    cout << endl;

    return 0;
}
