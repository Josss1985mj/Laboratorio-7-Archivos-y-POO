#include <iostream>
#include <string> // Incluimos la biblioteca string
using namespace std;

// Definición de la clase Persona
class Persona {
protected:
    string nombre; // Cambiamos el tipo de dato de char[] a string
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

// Definición de la clase Estudiante que hereda de Persona
class Estudiante : public Persona {
private:
    int numeroEstudiante;
    float promedioCalificaciones;

public:
    Estudiante(string nombre, int edad, string ocupacion, int numeroEstudiante, float promedioCalificaciones)
        : Persona(nombre, edad, ocupacion) {
        this->numeroEstudiante = numeroEstudiante;
        this->promedioCalificaciones = promedioCalificaciones;
    }

    void setNumeroEstudiante(int numeroEstudiante) {
        this->numeroEstudiante = numeroEstudiante;
    }

    void setPromedioCalificaciones(float promedioCalificaciones) {
        this->promedioCalificaciones = promedioCalificaciones;
    }

    int getNumeroEstudiante() {
        return numeroEstudiante;
    }

    float getPromedioCalificaciones() {
        return promedioCalificaciones;
    }

    void mostrarInfoEstudiante() {
        mostrarInfo();
        cout << "Numero de Estudiante: " << numeroEstudiante << endl;
        cout << "Promedio de Calificaciones: " << promedioCalificaciones << endl;
    }
};

int main() {
    // Creamos objetos de la clase Estudiante utilizando strings en lugar de arreglos de caracteres
    Estudiante estudiante1("Nayeli", 20, "Estudiante", 1001, 85.5);
    Estudiante estudiante2("Luciana", 22, "Estudiante", 1002, 92.3);

    // Mostramos la información de los estudiantes
    cout << "Informacion del Estudiante 1:" << endl;
    estudiante1.mostrarInfoEstudiante();
    cout << endl;

    cout << "Informacion del Estudiante 2:" << endl;
    estudiante2.mostrarInfoEstudiante();
    cout << endl;

    // Modificamos los atributos específicos de los estudiantes
    estudiante1.setPromedioCalificaciones(88.9);
    estudiante2.setNumeroEstudiante(1003);

    // Mostramos la información actualizada de los estudiantes
    cout << "Informacion actualizada del Estudiante 1:" << endl;
    estudiante1.mostrarInfoEstudiante();
    cout << endl;

    cout << "Informacion actualizada del Estudiante 2:" << endl;
    estudiante2.mostrarInfoEstudiante();
    cout << endl;

    return 0;
}
