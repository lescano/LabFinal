/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
#include <iostream>

#include "Funcion.h"
#include "DtFecha.h"

using namespace std;

Funcion::funcion(int id, int cantA, float costo, DtFecha* f){
    this->numero = id;
    this->cantAsientos = cantA;
    this->costo = costo;
    this->fecha = f;
}

int Funcion::getNumero(){
    return this->numero;
}
void Funcion::setNumero(int id){
    this->numero = id;
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