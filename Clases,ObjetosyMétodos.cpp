#include <iostream>
#include <string>
using namespace std;

// Definición de la clase Persona
class Persona {
protected: // Usamos protected para que las clases derivadas puedan acceder a estos atributos
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

    // Método para establecer la edad
    void setEdad(int edad) {
        this->edad = edad;
    }
};

// Definición de la clase Estudiante que hereda de Persona
class Estudiante : public Persona {
private:
    int numeroEstudiante;
    float promedioCalificaciones;

public:
    // Constructor que llama al constructor de Persona y además inicializa los atributos propios de Estudiante
    Estudiante(string nombre, int edad, string ocupacion, int numeroEstudiante, float promedioCalificaciones)
        : Persona(nombre, edad, ocupacion) {
        this->numeroEstudiante = numeroEstudiante;
        this->promedioCalificaciones = promedioCalificaciones;
    }

    // Métodos para establecer los valores de los atributos específicos de los estudiantes
    void setNumeroEstudiante(int numeroEstudiante) {
        this->numeroEstudiante = numeroEstudiante;
    }

    void setPromedioCalificaciones(float promedioCalificaciones) {
        this->promedioCalificaciones = promedioCalificaciones;
    }

    // Métodos para obtener los valores de los atributos específicos de los estudiantes
    int getNumeroEstudiante() {
        return numeroEstudiante;
    }

    float getPromedioCalificaciones() {
        return promedioCalificaciones;
    }

    // Método para mostrar la información de los estudiantes (incluyendo la heredada de Persona)
    void mostrarInfoEstudiante() {
        mostrarInfo(); // Llamamos al método mostrarInfo() de la clase Persona para mostrar la información heredada
        cout << "Numero de Estudiante: " << numeroEstudiante << endl;
        cout << "Promedio de Calificaciones: " << promedioCalificaciones << endl;
    }
};

int main() {
    // Crear objetos de la clase Estudiante y utilizar los métodos heredados y propios
    Estudiante estudiante1("Luciana", 20, "Estudiante", 1001, 85.5);
    Estudiante estudiante2("Nayeli", 22, "Estudiante", 1002, 92.3);

    // Mostrar información de los estudiantes
    cout << "Informacion del Estudiante 1:" << endl;
    estudiante1.mostrarInfoEstudiante();
    cout << endl;

    cout << "Informacion del Estudiante 2:" << endl;
    estudiante2.mostrarInfoEstudiante();
    cout << endl;

    // Modificar los atributos específicos de los estudiantes utilizando los métodos propios
    estudiante1.setPromedioCalificaciones(88.9);
    estudiante2.setEdad(23); // Corregimos la llamada al método setEdad

    // Mostrar información actualizada de los estudiantes
    cout << "Informacion actualizada del Estudiante 1:" << endl;
    estudiante1.mostrarInfoEstudiante();
    cout << endl;

    cout << "Informacion actualizada del Estudiante 2:" << endl;
    estudiante2.mostrarInfoEstudiante();
    cout << endl;

    return 0;
}
