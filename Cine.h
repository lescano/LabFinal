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
#include "Sala.h"
using namespace std;

class cine {
private:
    int nro_cine;
    string direccion;
    //Coleccion de las salas del cine
public:
    cine(int,string);
    int getNro_cine();
    string getDireccion();
    void setNro_cine(int);
    void setDireccion(string);
    ~cine();
};

#endif /* CINE_H */

