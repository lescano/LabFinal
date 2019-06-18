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
    //usuario->setPuntaje(this);
}

Pelicula* Puntaje::getPeliculaPuntuada(){
    return peliculaPuntuada;
}

int Puntaje::getPuntos(){
    return this->puntos;
}

void Puntaje::setPuntos(int puntos){
    this->puntos=puntos;
}

bool Puntaje::tienePuntaje(string titulo){
    if(this->peliculaPuntuada->getTitulo().compare(titulo)==0)
        return true;
    else
        return false;
}

Puntaje::~Puntaje(){
    
}