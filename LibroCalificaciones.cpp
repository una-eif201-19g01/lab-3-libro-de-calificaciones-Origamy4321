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


LibroCalificaciones::LibroCalificaciones() {

    setNombreCurso(nombreCurso);

    for (int estudiante = 0; estudiante < ESTUDIANTES; ++estudiante) {
        for (int examen = 0; examen < EXAMENES; ++examen) {
            calificaciones[estudiante][examen] = 0;
        }
    }
}

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
            if (calificaciones[estudiante][examen] <= notaMinima) {
                notaMinima = calificaciones[estudiante][examen];
            }
        }
    }
    return notaMinima;
}

int LibroCalificaciones::obtenerNotaMaxima() {

    int notaMaxima = 0;

    for (int estudiante = 0; estudiante < ESTUDIANTES; ++estudiante) {
        for (int examen = 0; examen < EXAMENES; ++examen) {
            if (calificaciones[estudiante][examen] > notaMaxima)
                notaMaxima = calificaciones[estudiante][examen];
        }
    }
    return notaMaxima;
}


const string &LibroCalificaciones::getNombreCurso() const {
    return nombreCurso;
}


double LibroCalificaciones::obtenerPromedio(const int nota) {
    int promedio = 0;
    for (int examen = 0; examen < EXAMENES; ++examen) {
        promedio = promedio + calificaciones[nota][examen];
    }
    return promedio / 3;
}


void LibroCalificaciones::setNombreCurso(const string &nombreCurso) {
    LibroCalificaciones::nombreCurso = nombreCurso;
}

string LibroCalificaciones::obtenerReporteNotasMaxMin() {

    string reporte = "";
    reporte = reporte + "\nLa nota maxima es: " + to_string(obtenerNotaMaxima());
    reporte = reporte + "\nLa nota minima es: " + to_string(obtenerNotaMinima());


    return reporte;
}


string LibroCalificaciones::obtenerReporteNotas() {


    string reporte;

    for (int estudiante = 0; estudiante < ESTUDIANTES; ++estudiante) {
        reporte = reporte + "\nEstudiante [" + to_string(estudiante) + "]\t\t\t";
        for (int examen = 0; examen < EXAMENES; ++examen) {
            reporte = reporte + "[" + to_string(calificaciones[estudiante][examen]) + "]\t\t\t";
        }
        reporte = reporte + "[" + to_string(obtenerPromedio(estudiante)) + "]\t\t\t";
    }

    return reporte;
}




