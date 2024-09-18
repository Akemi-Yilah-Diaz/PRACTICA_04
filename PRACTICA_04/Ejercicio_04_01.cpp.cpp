/*
// Materia: Programación I, Paralelo 4
// Autor: Akemi Yilah Machicado Diaz
// Fecha creación: 17/09/2024
// Número de ejercicio: 1
// Problema planteado: Escriba declaraciones de arreglo para lo siguiente:
a. una lista de 100 voltajes de precisión doble
b. una lista de 50 temperaturas de precisión doble
c. una lista de 30 caracteres, cada uno representando un código
d. una lista de 100 años en número entero
e. una lista de 32 velocidades de precisión doble
f. una lista de 1000 distancias de precisión doble
g. una lista de 6 números de código enteros
*/

#include <iostream>
#include <vector>
using namespace std;

int main() {
    
    vector<double> voltajes(100, 0.0);        
    vector<double> temperaturas(50, 0.0);     
    vector<char> codigos(30, 'A');            
    vector<int> anios(100, 2023);             
    vector<double> velocidades(32, 0.0);    
    vector<double> distancias(1000, 0.0);     
    vector<int> numerosCodigo = {101, 102, 103, 104, 105, 106};  
    //cada uno tiene diferncias depende al tipo de variable 

    return 0;
}
