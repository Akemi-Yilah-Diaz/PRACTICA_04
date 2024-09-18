/*
// Materia: ProgramaciC3n I, Paralelo 4
// Autor: Akemi Yilah Machicado Diaz
// Fecha creaciC3n: 17/09/2024
// NC:mero de ejercicio: 8
// Problema planteado: 8. Un arreglo constante contiene la producciC3n en toneladas mC)tricas de 6 minerales, y
otro contiene los nombres de estos minerales, para obtener:
- Buscar por nombre de mineral y desplegar la producciC3n
- Ordenar del mayor al menor (producciC3n) y mostrar:
Mineral Produccion b"
SN 998.000
SB 876.500
AU 786.670
PT 636.143
AG 135.567
CU 109.412
*/

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() 
{
    const vector<string> nombres = {"SN", "SB", "AU", "PT", "AG", "CU"};
    const vector<double> produccion = {998000.0, 876500.0, 786670.0, 636143.0, 135567.0, 109412.0};

    string mineral;
    cout << "Ingrese el nombre del mineral: ";
    cin >> mineral;

    auto it = find(nombres.begin(), nombres.end(), mineral);
    if (it != nombres.end()) {
        size_t index = distance(nombres.begin(), it);
        cout << "Producción de " << mineral << ": " << produccion[index] << " TM\n";
    } else {
        cout << "Mineral no encontrado.\n";
    }

    vector<pair<string, double>> minerales;
    for (size_t i = 0; i < nombres.size(); ++i)
    {
        minerales.push_back(make_pair(nombres[i], produccion[i]));
    }

    sort(minerales.begin(), minerales.end(), [](const pair<string, double>& a, const pair<string, double>& b) 
    {
        return a.second > b.second;
    });

    cout << "\nMineral  Producción (TM)\n";
    for (const auto& m : minerales) {
        cout << m.first << "  " << m.second << "\n";
    }

    return 0;
}
