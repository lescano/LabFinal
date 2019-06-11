/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
#include <iostream>
#include <string>
#include "Funcion.h"
#include "DtFecha.h"


using namespace std;

Funcion::Funcion(DtFecha* f, int dur, Pelicula* pelicula, Sala* sala){
    this->idFuncion = generarId();
    this->cantAsientos = 0;
    this->costo = 0;
    this->fecha = f;
    this->duracion=dur;
}

int Funcion::getIdFuncion(){
    return this->idFuncion;
}
void Funcion::setIdFuncion(int id){
    this->idFuncion = id;
}
int Funcion::getCantAsientos(){
    return this->cantAsientos;
}
void Funcion::setCantAsientos(int cantA){
    this->cantAsientos = cantA;
}
float Funcion::getCosto(){
    return this->costo;
}
void Funcion::setCosto(float costo){
    this->costo = costo;
}
DtFecha* Funcion::getFecha(){
    return this->fecha;
}
void Funcion::setFecha(DtFecha* f){
    this->fecha = f;
}

int Funcion::getDuracion(){
    return this->duracion;
}

void Funcion::setDuracion(int dur){
    this->duracion=dur;
}


int Funcion::generarId(){
    return id+1;
}

Funcion::~Funcion(){
    
}
