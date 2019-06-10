/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Cine.h
 * Author: vanessa
 *
 * Created on 25 de abril de 2019, 12:26 PM
 */

#ifndef CINE_H
#define CINE_H
#include <string>
#include "DtFuncion.h"
#include "DtFecha.h"
#include "Sala.h"
#include "IDictionary.h"

using namespace std;

class Cine {
private:
    int nro_cine;
    string direccion;
    float costo;
    //Coleccion de las salas del cine
public:
    Cine(int,string, float);
    int getNro_cine();
    string getDireccion();
    float getCosto();
    void setNro_cine(int);
    void setDireccion(string);
    void setCosto(float);
    void borrarSalas();
    DtFuncion** listarFunciones();  
    Funcion* seleccionarFuncion(int);
    ~Cine();
};

#endif /* CINE_H */

