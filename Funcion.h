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

class funcion {
private:
    int numero;//identificador de la funcion
    int cantAsientos;
    float costo;
    DtFecha fecha;
public:
    funcion(int, int, float, DtFecha);
    int getNumero();
    void setNumero(int);
    int getCantAsientos();
    void setCantAsientos(int);
    float getCosto();
    void setCosto(float);
    DtFecha getFecha();
    void setFecha(DtFecha);
    ~funcion();
};


#endif /* FUNCION_H */

