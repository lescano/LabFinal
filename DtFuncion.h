/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   DtFuncion.h
 * Author: vanessa
 *
 * Created on 8 de mayo de 2019, 04:13 PM
 */

#ifndef DTFUNCION_H
#define DTFUNCION_H
#include "DtFecha.h"

class DtFuncion {
private:
    int numero;//identificador de la funcion
    int cantAsientos;
    float costo;
    DtFecha* fecha;
public:
    DtFuncion(int, int, float, DtFecha*);
    int getNumero();
    int getCantAsientos();
    float getCosto();
    DtFecha* getFecha();
    ~DtFuncion();
};

#endif /* DTFUNCION_H */

