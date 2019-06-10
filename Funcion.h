/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Funcion.h
 * Author: vanessa
 *
 * Created on 25 de abril de 2019, 12:28 PM
 */

#ifndef FUNCION_H
#define FUNCION_H
#include "DtFecha.h"
#include <string>
using namespace std;

class Funcion {
private:
    int idFuncion;//identificador de la funcion
    int cantAsientos;
    float costo;
    DtFecha* fecha; //preguntar si hay que hacer un DtHora
    int duracion;
public:
    Funcion(int idFuncion, int cantA, float costo, DtFecha* fecha, int duracion);
    int getIdFuncion();
    void setIdFuncion(int);
    int getCantAsientos();
    void setCantAsientos(int);
    float getCosto();
    void setCosto(float);
    DtFecha* getFecha();
    void setFecha(DtFecha*);
    int getDuracion();
    void setDuracion(int);
    ~Funcion();
};


#endif /* FUNCION_H */

