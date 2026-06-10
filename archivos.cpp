/*
Programa para el manejo sencillo de archivos con el lenguaje de programacion C++
*/

#include <iostream>
#include <fstream>
using namespace std;

int main() {
    // --- ESCRIBIR EN UN ARCHIVO ---
    ofstream archivoSalida("ejemplo.txt"); // Abre (o crea) archivo para escritura
    if (archivoSalida.is_open()) {
        archivoSalida << "Hola, mundo!" << endl;
        archivoSalida << "Esta es una línea de texto." << endl;
        archivoSalida.close(); // Cierra el archivo
        cout << "Archivo escrito correctamente." << endl;
    } else {
        cout << "Error al abrir archivo para escritura." << endl;
        return 1;
    }

    // --- LEER EL ARCHIVO ---
    ifstream archivoEntrada("ejemplo.txt"); // Abre archivo para lectura
    if (archivoEntrada.is_open()) {
        string linea;
        while (getline(archivoEntrada, linea)) { // Lee línea por línea
            cout << "Leído: " << linea << endl;
        }
        archivoEntrada.close(); // Cierra el archivo
    } else {
        cout << "Error al abrir archivo para lectura." << endl;
        return 1;
    }

    return 0;
}
