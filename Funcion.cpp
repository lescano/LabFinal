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

Funcion::funcion(int id, int cantA, float costo, DtFecha* f, string dur){
    this->id = id;
    this->cantAsientos = cantA;
    this->costo = costo;
    this->fecha = f;
    this->duracion=dur;
}

int Funcion::getId(){
    return this->id;
}
void Funcion::setId(int id){
    this->id = id;
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

string Funcion::getDuracion(){
    return this->duracion;
}

void Funcion::setDuracion(string dur){
    this->duracion=dur;
}

Funcion::~Funcion(){
    
}