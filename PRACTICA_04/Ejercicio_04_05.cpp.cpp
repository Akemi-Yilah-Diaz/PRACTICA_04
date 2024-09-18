/*
// Materia: Programación I, Paralelo 4
// Autor: Akemi Yilah Machicado Diaz
// Fecha creación: 17/09/2024
// Número de ejercicio: 5
// Problema planteado: Leer 2 vectores de dimensión N y combine ambos en otro vector.
*/

#include <iostream>
#include <vector>
using namespace std;

int main()
{
    size_t N;
    cout << "Ingrese el tamaño del vector";
    cin >> N;

    vector<int> vector1(N), vector2(N), combinado(2 * N);

    cout << "Ingrese el primer vector" << endl;
    for (size_t i = 0; i < N; ++i) std::cin >> vector1[i];

    cout << "Ingrese el segundo vector" << endl;
    for (size_t i = 0; i < N; ++i) cin >> vector2[i];

    combinado.insert(combinado.begin(), vector1.begin(), vector1.end());
    combinado.insert(combinado.end(), vector2.begin(), vector2.end());

    cout << "Vector combinado" << endl;
    for (int val : combinado) cout << val << " ";
    cout <<endl;

    return 0;
}

