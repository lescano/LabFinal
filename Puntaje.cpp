/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

#include "Puntaje.h"
#include "Pelicula.h"

Puntaje::Puntaje(Pelicula* pelicula, int puntos){
    this->puntos = puntos;
    this->peliculaPuntuada = pelicula;
    this->peliculaPuntuada->setPuntajeTotal(puntos);
}

Pelicula* Puntaje::getPeliculaPuntuada(){
    return peliculaPuntuada;
}

bool Puntaje::tienePuntaje(string titulo){
    if(this->peliculaPuntuada->getTitulo().compare(titulo)==0)
        return true;
    else
        return false;
}

bool Puntaje::esPelicula(string titulo){
    if(this->peliculaPuntuada->getTitulo().compare(titulo)==0)
        return true;
    else
        return false;
}

int Puntaje::getPuntos(){
    return this->puntos;    
}

Puntaje::~Puntaje(){
    
}