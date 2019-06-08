/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Pelicula.h
 * Author: vanessa
 *
 * Created on 25 de abril de 2019, 12:27 PM
 */

#ifndef PELICULA_H
#define PELICULA_H
#include <string>
#include "Opinion.h"
#include "Cine.h"
using namespace std;

class Pelicula {
private:
    string titulo;
    string poster_url;
    string sinopsis;
    float puntaje_total;
    //coleccion de las opiniones de esa pelicula
    //coleccion de los cines de esa pelicula
public:
    pelicula();
    pelicula(string, string, string, float);
    string getTitulo();
    void setTitulo(string);
    string getPoster_url();
    void setPoster_url(string);
    string getSinopsis();
    void setSinopsis(string);
    float getPuntaje_total();
    void setPuntaje_total(float);
    ~Pelicula();
};

#endif /* PELICULA_H */

