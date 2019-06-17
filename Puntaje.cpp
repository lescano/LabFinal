/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

#include "Puntaje.h"

Puntaje::Puntaje(Pelicula* pelicula, int puntos){
    this->puntos = puntos;
    this->peliculaPuntuada = pelicula;
    //usuario->setPuntaje(this);
}

Pelicula* Puntaje::getPeliculaPuntuada(){
    return peliculaPuntuada;
}

Puntaje::~Puntaje(){
    
}