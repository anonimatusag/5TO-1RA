#include <iostream>

using namespace std;

const int AR= 10;

int main() {
    int arreglo[AR];
    int numeroBuscar, nuevoValor;
    int posicionEncontrada = -1;

    cout << "Ingrese " << AR << " numeros para llenar el arreglo:" << endl;
    for (int i = 0; i < AR; ++i) {
        cout << "Elemento " << i + 1 << ": ";
        cin >> arreglo[i];
    }

    cout << "Ingrese el numero que desea buscar en el arreglo: ";
    cin >> numeroBuscar;

    for (int i = 0; i < AR; ++i) {
        if (arreglo[i] == numeroBuscar) {
            posicionEncontrada = i;
            break;
        }
    }

    if (posicionEncontrada != -1) {
        cout << "Se encontro el numero " << numeroBuscar << " en la posicion " << posicionEncontrada << " del arreglo." << endl;
        cout << "Ingrese el nuevo valor para reemplazar en esa posicion: ";
        cin >> nuevoValor;
        arreglo[posicionEncontrada] = nuevoValor;
    } else {
        cout << "El numero " << numeroBuscar << " no se encontro en el arreglo." << endl;
    }

    cout << "Arreglo actualizado: ";
    for (int i = 0; i < AR; ++i) {
        if (i == posicionEncontrada) {
            cout << "[" << arreglo[i] << "] ";
        } else {
            cout << arreglo[i] << " ";
        }
    }
    cout << endl;

    return 0;
}

