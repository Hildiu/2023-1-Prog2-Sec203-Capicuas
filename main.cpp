/*------------------------------------
 * Dato de Entrada: numero (long long int)
 * Dato de Salida : mensaje "Es capicua" o
 *                          "No es capicua"
 */

#include <iostream>
#include "UFunciones.h"
using namespace std;

int main()
{
    long long int numero;

    cout << "Numero : ";
    cin >> numero;
    if( numero == invertirNumreo(numero))
        cout << "Es capicua";
    else
        cout << "No es capicua";
    return 0;
}


/* como pizarra
 * CmakeLists.xt
 * main.cpp
 *
 * UFunciones.h
 * UFunciones.cpp
 *
 * */