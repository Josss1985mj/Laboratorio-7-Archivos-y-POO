#include <iostream>
#include <fstream>
using namespace std;

void escribirFrases();

int main(){
    escribirFrases();
    return 0;
}

void escribirFrases(){
    ofstream archivo;
    string nombreArchivo, frase;
    char rpt;

    cout << "Digite el nombre del archivo: ";
    getline(cin, nombreArchivo);

    archivo.open(nombreArchivo.c_str(), ios::out); // Creamos el archivo

    if (archivo.fail()) { // Si ha ocurrido algún error
        cout << "No se pudo abrir el archivo" << endl;
        return; // Retorna sin salir del programa
    }

    do {
        cin.ignore(); // Limpiar el buffer del teclado antes de getline
        cout << "Digite una frase: ";
        getline(cin, frase);
        archivo << frase << endl;

        cout << "\nDesea agregar otra frase(S/N): ";
        cin >> rpt;
    } while ((rpt == 'S') || (rpt == 's'));

    archivo.close(); // Cerramos el archivo
}
