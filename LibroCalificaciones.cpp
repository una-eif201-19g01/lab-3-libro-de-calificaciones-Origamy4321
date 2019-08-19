/*
 * =====================================================================================
 *
 *       Filename:  LibroCalificaciones.cpp
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

#include "LibroCalificaciones.h"
#include <iomanip>
#include <iostream>


LibroCalificaciones::LibroCalificaciones() {}

LibroCalificaciones::LibroCalificaciones(const string &nombreCurso, int arregloCalificaciones[][3]) {
    setNombreCurso(nombreCurso);

    for (int estudiante = 0; estudiante < ESTUDIANTES; ++estudiante) {
        for (int examen = 0; examen < EXAMENES; ++examen) {
            calificaciones[estudiante][examen] = arregloCalificaciones[estudiante][examen];
        }
    }
}

int LibroCalificaciones::obtenerNotaMinima() {

    int notaMinima = 100;

    for (int estudiante = 0; estudiante < ESTUDIANTES; ++estudiante) {
        for (int examen = 0; examen < EXAMENES; ++examen) {
            if (calificaciones[estudiante][examen] < notaMinima) {
                notaMinima = calificaciones[estudiante][examen];
            }
        }
    }
    return notaMinima;
}

int LibroCalificaciones::obtenerNotaMaxima() {

    int notaMaxima;

    for (int estudiante = 0; estudiante < ESTUDIANTES; ++estudiante) {
        for (int examen = 0; examen < EXAMENES; ++examen) {
            if (calificaciones[estudiante][examen] > notaMaxima)
                notaMaxima = calificaciones[estudiante][examen];
        }
    }
    return 0;
}

double LibroCalificaciones::obtenerPromedio(const int *, const int) {  // METODO OBTENER PROMEDIO

    int promedio = 0;
    for (int estudiante = 0; estudiante < ESTUDIANTES; ++estudiante) {
        for (int examen = 0; examen < EXAMENES; ++examen) {
            promedio = promedio + calificaciones[estudiante][examen];
        }

    }
    return promedio / 3;
}


const string &LibroCalificaciones::getNombreCurso() const {
    return nombreCurso;
}

void LibroCalificaciones::setNombreCurso(const string &nombreCurso) {
    LibroCalificaciones::nombreCurso = nombreCurso;
}

string LibroCalificaciones::obtenerReporteNotasMaxMin() {

    string reporte = "";


    for (int estudiante = 0; estudiante < ESTUDIANTES; estudiante++) {
        for (int examen = 0; examen < EXAMENES; examen++) {


        }

    }
    return 0;
}


string LibroCalificaciones::obtenerReporteNotas() {


    return std::__cxx11::string();
}





