/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   DtPuntaje.h
 * Author: Danilo
 *
 * Created on 15 de junio de 2019, 17:40
 */

#ifndef DTPUNTAJE_H
#define DTPUNTAJE_H
#include "ICollectible.h"
#include "Pelicula.h"

#include <iostream>

using namespace std;

class DtPuntaje : public ICollectible {
public:
    DtPuntaje(Pelicula*, int);
    virtual ~DtPuntaje();
private:
    Pelicula* pelicula;
    int puntos;

};

#endif /* DTPUNTAJE_H */

