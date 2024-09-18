/*
// Materia: Programación I, Paralelo 4
// Autor: Akemi Yilah Machicado Diaz
// Fecha creación: 17/09/2024
// Número de ejercicio: 7
// Problema planteado: Programa que declare un vector de diez elementos enteros y pida números para
rellenarlo hasta que se llene el vector o se introduzca un número negativo. Entonces se
debe imprimir el vector (sólo los elementos introducidos).
*/

#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> vec(10); 
    size_t index = 0; 

    cout << "Ingrese números (un número negativo para detenerse):" << endl;

    while (index < vec.size() && std::cin >> vec[index] && vec[index] >= 0)
    {
        ++index; 
    }

    cout << "Números introducidos:" << endl;
    for (size_t i = 0; i < index; ++i) {
        cout << vec[i] << " ";
    }
    cout << endl;

    return 0;
}
