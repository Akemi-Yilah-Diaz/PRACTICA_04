/*
// Materia: Programación I, Paralelo 4
// Autor: Akemi Yilah Machicado Diaz
// Fecha creación: 17/09/2024
// Número de ejercicio: 4
// Problema planteado:  Leer 2 vectores de dimensión N y calcule la multiplicación de los mismos en otro
vector.
*/

#include <iostream>
#include <vector>
using namespace std;

int main()
{
    size_t N;
    cout << "Ingrese el tamaño de los vectores: ";
    cin >> N;

    vector<double> vector1(N);
    vector<double> vector2(N);
    vector<double> resultado(N);

    cout << "Ingrese el primer vector:" << endl;
    for (size_t i = 0; i < N; ++i) cin >> vector1[i];

    cout << "Ingrese el segundo vector" << endl;
    for (size_t i = 0; i < N; ++i) cin >> vector2[i];

    for (size_t i = 0; i < N; ++i) resultado[i] = vector1[i] * vector2[i];

    cout << "Resultado de la multiplicación " << endl;
    for (double val : resultado) std::cout << val << " ";
    cout << endl;

    return 0;
}
