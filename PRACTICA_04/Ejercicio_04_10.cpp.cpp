/*
// Materia: ProgramaciC3n I, Paralelo 4
// Autor: Akemi Yilah Machicado Diaz
// Fecha creaciC3n: 17/09/2024
// NC:mero de ejercicio: 10
// Problema planteado:Un arreglo contiene las calificaciones de un examen dado por un grupo de
estudiantes, otro arreglo contiene los nombres de los mismos y un tercer arreglo contiene
la sigla de la carrera. Escribir un programa que permita obtener el nombre del alumno que
obtuvo la mayor y el nombre del alumno que obtuvo la nota menor, además mostrar que
carrera tuvo un desempeño mayor con relación al promedio del curso
*/

#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

int main() 
{

    vector<std::string> nombres = {"jake", "lina", "jos", "Mery", "gary"};
    vector<double> calificaciones = {85.5, 92.0, 78.5, 88.5, 91.0};
    vector<std::string> carreras = {"ING", "BIO", "ING", "MED", "BIO"};

    double mayorCalif = calificaciones[0], menorCalif = calificaciones[0];
    string nombreMayor = nombres[0], nombreMenor = nombres[0];
    
    for (size_t i = 1; i < calificaciones.size(); ++i) {
        if (calificaciones[i] > mayorCalif) {
            mayorCalif = calificaciones[i];
            nombreMayor = nombres[i];
        }
        if (calificaciones[i] < menorCalif) {
            menorCalif = calificaciones[i];
            nombreMenor = nombres[i];
        }
    }

    double suma = 0;
    for (double nota : calificaciones) {
        suma += nota;
    }
    double promedio = suma / calificaciones.size();
    
    double sumaIng = 0, sumaBio = 0, sumaMed = 0;
    int cantIng = 0, cantBio = 0, cantMed = 0;

    for (size_t i = 0; i < carreras.size(); ++i)
    {
        if (carreras[i] == "ING")
        {
            sumaIng += calificaciones[i];
            cantIng++;
        } else if (carreras[i] == "BIOM")
        {
            sumaBio += calificaciones[i];
            cantBio++;
        } else if (carreras[i] == "MED") 
        {
            sumaMed += calificaciones[i];
            cantMed++;
        }
    }

    double promIng = sumaIng / cantIng;
    double promBio = sumaBio / cantBio;
    double promMed = sumaMed / cantMed;

    string mejorCarrera;
    double mejorPromedio = promIng;

    if (promBio > mejorPromedio)
    {
        mejorCarrera = "BIO";
        mejorPromedio = promBio;
    }
    if (promMed > mejorPromedio)
    {
        mejorCarrera = "MED";
        mejorPromedio = promMed;
    }

    cout << "El alumno con la mayor nota " << nombreMayor << " con " << mayorCalif << "\n";
    cout << "El alumno con la menor nota " << nombreMenor << " con " << menorCalif << "\n";
    cout << "La carrera con mejor promedio " << mejorCarrera << " con un promedio de " << mejorPromedio << "\n";

    return 0;
}
