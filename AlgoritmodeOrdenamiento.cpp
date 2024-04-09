#include <iostream>
#include <vector>
#include <string>
using namespace std;

// Función para ordenar una lista de nombres utilizando el algoritmo de burbuja
void ordenarNombres(vector<string> &nombres) {
    int n = nombres.size();
    for (int i = 0; i < n - 1; ++i) {
        for (int j = 0; j < n - i - 1; ++j) {
            if (nombres[j] > nombres[j + 1]) {
                // Intercambiar los nombres si están en el orden incorrecto
                string temp = nombres[j];
                nombres[j] = nombres[j + 1];
                nombres[j + 1] = temp;
            }
        }
    }
}

int main() {
    // Lista de nombres de estudiantes desordenados
    vector<string> nombres = {"Eduardo", "Sebastian", "Heber", "Gabriela", "Maidy"};

    // Mostrar nombres desordenados
    cout << "Nombres desordenados:" << endl;
    for (const string& nombre : nombres) {
        cout << nombre << endl;
    }

    // Ordenar los nombres
    ordenarNombres(nombres);

    // Mostrar nombres ordenados
    cout << "\nNombres ordenados:" << endl;
    for (const string& nombre : nombres) {
        cout << nombre << endl;
    }

    return 0;
}
