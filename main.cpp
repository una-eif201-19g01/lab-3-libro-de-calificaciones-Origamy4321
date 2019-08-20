/*
 * =====================================================================================
 *
 *       Filename:  main.cpp
 *
 *    Description:  Permite mostrar las calificaciones de un curso
 *
 *        Created:  2019-08-12
 *
 *         Author:  Maikol Guzman Alan mikeguzman@gmail.com
 *   Organization:  Universidad Nacional de Costa Rica
 *
 * =====================================================================================
 */

#include <iomanip>
#include <iostream>
#include <iostream>
#include "LibroCalificaciones.h"


int main() {

    static const int ESTUDIANTES = 10;
    static const int EXAMENES = 3;

    int listaCalificaciones[ESTUDIANTES][EXAMENES] = {
            {87,  96,  70},
            {68,  87,  90},
            {94,  100, 90},
            {100, 81,  82},
            {83,  65,  85},
            {78,  87,  65},
            {85,  75,  83},
            {91,  94,  100},
            {76,  72,  84},
            {87,  93,  73}
    };

    LibroCalificaciones v1("Curso Progra I", listaCalificaciones);

    cout << v1.obtenerReporteNotasMaxMin() << endl;
    cout << v1.obtenerReporteNotas() << endl;


    return 0;

}