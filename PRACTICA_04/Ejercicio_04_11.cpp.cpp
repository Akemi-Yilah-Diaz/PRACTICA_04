/*
// Materia: ProgramaciC3n I, Paralelo 4
// Autor: Akemi Yilah Machicado Diaz
// Fecha creaciC3n: 17/09/2024
// NC:mero de ejercicio: 10
// Problema planteado:11. Se tiene el arreglo
Ventas:
0 1 2 10 11
vene vfeb vmar . . vnov vdic
Donde se almacenan las ventas mensuales de una empresa y un arreglo constante que
contiene los nombres de los meses:
Meses:
0 1 2 10 11
“Ene” “Feb” “Mar” . . “Nov” “Dic”
Escriba un programa que obtenga:
• ¿En qué mes(es) se dieron las ventas máximas de la empresa?
• ¿A cuánto ascendieron las ventas máximas?
• ¿Cuál fue el total de las ventas?
Las ventas deben ser ingresadas por teclado.
*/

#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main() 
{
    const vector<string> meses = {"Ene", "Feb", "Mar", "Abr", "May", "Jun", "Jul", "Ago", "Sep", "Oct", "Nov", "Dic"};

    vector<int> ventas(12);

    cout << "Ingrese las ventas para cada mes\n";
    for (int i = 0; i < 12; ++i) 
    {
        cout << meses[i] << ": ";
        cin >> ventas[i];
    }

    int ventamaxima = ventas[0];
    for (int i = 1; i < 12; ++i) {
        if (ventas[i] > ventamaxima) {
            ventamaxima = ventas[i];
        }
    }

    int totalventa = 0;
    for (int i = 0; i < 12; ++i) {
        totalventa += ventas[i];
    }

    cout << "Mes con la mayor venta " << ventamaxima << "\n";
    for (int i = 0; i < 12; ++i) 
    {
        if (ventas[i] == ventamaxima)
        {
            cout << meses[i] << "\n";
        }
    }

    cout << "El total de las venta " << totalventa << "\n";

    return 0;
}
