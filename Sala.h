/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Sala.h
 * Author: vanessa
 *
 * Created on 25 de abril de 2019, 12:27 PM
 */

#ifndef SALA_H
#define SALA_H
#include "Funcion.h"
#include "IDictionary.h"
#include "DtFuncion.h"

class Sala {
private:
    int nroSala;
    int capacidad;
    IDictionary* funciones;
public:
    Sala(int, int);
    ~Sala();
    int getNro_sala();
    void setNro_sala(int);
    int getCapacidad();
    void setCapacidad(int);
    IDictionary* getFunciones();
    void setFunciones(IDictionary*);
    
    void borrarFunciones();
    DtFuncion** listarFunciones();
    Funcion* seleccionarFuncion(int idFuncion);
    
};
#endif /* SALA_H */

