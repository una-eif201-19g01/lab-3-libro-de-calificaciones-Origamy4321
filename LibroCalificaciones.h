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

static const int ESTUDIANTES = 10;

static const int EXAMENES = 3;

using namespace std;

class LibroCalificaciones {


    string nombreCurso;

    int calificaciones[ESTUDIANTES][EXAMENES];

    int obtenerNotaMinima();

    int obtenerNotaMaxima();

    double obtenerPromedio(const int [], const int);

public:

    LibroCalificaciones();


    LibroCalificaciones(const string &nombreCurso, int [][EXAMENES]);

    string obtenerReporteNotas();

    string obtenerReporteNotasMaxMin();

    const string &getNombreCurso() const;

    void setNombreCurso(const string &nombreCurso);


};


#endif //CALIFICACIONES_LIBROCALIFICACIONES_H


//nota buscar para que es std::setw()