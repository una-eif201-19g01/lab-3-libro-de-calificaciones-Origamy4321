/*
 * =====================================================================================
 *
 *       Filename:  LibroCalificaciones.h
 *
 *    Description:  Reporte de calificaciones
 *
 *        Created:  2019-08-12
 *
 *         Author:  Maikol Guzman Alan mikeguzman@gmail.com
 *   Organization:  Universidad Nacional de Costa Rica
 *
 * =====================================================================================
 */
// nota las constantes se mencionan en mayuscula en los uml

#ifndef CALIFICACIONES_LIBROCALIFICACIONES_H
#define CALIFICACIONES_LIBROCALIFICACIONES_H

#include <string>
#include <iostream>
#include <string>

const int Estudiantes = 10;

const int Examenes = 3;

using namespace std;

class LibroCalificaciones {
private:

    string nombreCurso;

    int calificaciones[Estudiantes][Examenes];

    int obtenerNotaMinima();

    int obtenerNotaMaxima();

    double obtenerPromedio(const int [], const int);

public:

    LibroCalificaciones();



};


#endif //CALIFICACIONES_LIBROCALIFICACIONES_H


//nota buscar para que es std::setw()