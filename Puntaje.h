/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Puntaje.h
 * Author: Danilo
 *
 * Created on 9 de junio de 2019, 20:44
 */

#ifndef PUNTAJE_H
#define PUNTAJE_H

#include "Pelicula.h"
#include "IDictionary.h"
#include <string>
using namespace std;

class Puntaje{
private:
    int puntos;
    Pelicula* peliculaPuntuada;
public:
    Puntaje(int);
    ~Puntaje();
    int getPuntos();
    void setPuntos(int);
    Pelicula* getPeliculaPuntuada();
    void setPeliculaPuntuada(Pelicula*);
    
    bool esPelicula(string titulo);
    bool tienePuntaje(string titulo);
};

#endif /* PUNTAJE_H */

