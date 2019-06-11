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
#include "IDictionary.h"
#include "ICollectible.h"
#include "ICollection.h"

using namespace std;

class Funcion;
class Sala;

class Cine : public ICollectible {
private:
    int nro_cine;
    string direccion;
    float costo;
    IDictionary* sala;
    int id=0;
    //Coleccion de las salas del cine
public:
    Cine(string, float);
    int getNro_cine();
    string getDireccion();
    float getCosto();
    void setNro_cine(int);
    void setDireccion(string);
    void setCosto(float);
    void borrarSalas();
    ICollection* listarFunciones();  //preguntar
    Funcion* seleccionarFuncion(int);
    void setSala(Sala*);
    
    int generarId();
    ~Cine();
};

#endif /* CINE_H */

