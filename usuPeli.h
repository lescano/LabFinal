/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   usuPeli.h
 * Author: vanessa
 *
 * Created on 4 de mayo de 2019, 08:50 PM
 */

#ifndef USUPELI_H
#define USUPELI_H
#include "Pelicula.h"
#include "IDictionary.h"

class usuPeli{
private:
    int puntos;
    pelicula* peliculaPuntuada;
public:
    usuPeli(int);
    ~usuPeli();
    int getPuntos();
    void setPuntos(int);
};

#endif /* USUPELI_H */

