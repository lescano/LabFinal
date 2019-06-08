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

class Sala {
private:
    int nro_sala;
    int capacidad;
    //coleccion de funciones 
public:
    sala(int, int);
    ~Sala();
    int getNro_sala();
    void setNro_sala(int);
    int getCapacidad();
    void setCapacidad(int);
};

#endif /* SALA_H */

