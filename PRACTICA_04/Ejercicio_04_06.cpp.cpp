/*
// Materia: Programación I, Paralelo 4
// Autor: Akemi Yilah Machicado Diaz
// Fecha creación: 17/09/2024
// Número de ejercicio: 6
// Problema planteado: 6. Programa que declare tres vectores ‘vector1’, ‘vector2’ y ‘vector3’ de cinco enteros
cada uno, pida valores para ‘vector1’ y ‘vector2’ y calcule vector3=vector1+vector2.
*/

#include <iostream>
#include <vector>
using namespace std;

int main() 
{
    vector<int> vector1(5), vector2(5), vector3(5);

    cout << "Ingrese 5 numeros para vector1" << endl;
    for (int& num : vector1) cin >> num;

    cout << "Ingrese 5 números para vector2" << endl;
    for (int& num : vector2) cin >> num;

    for (size_t i = 0; i < 5; ++i) 
    {
        vector3[i] = vector1[i] + vector2[i];
    }

    cout << "Resultado (vector3 = vector1 + vector2):" << endl;
    for (int num : vector3) cout << num << " ";
    cout << endl;

    return 0;
}
