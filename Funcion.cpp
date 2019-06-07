/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
#include <iostream>

#include "Funcion.h"
#include "DtFecha.h"

using namespace std;

funcion::funcion(int id, int cantA, float costo, DtFecha* f){
    this->numero = id;
    this->cantAsientos = cantA;
    this->costo = costo;
    this->fecha = f;
}

int funcion::getNumero(){
    return this->numero;
}
void funcion::setNumero(int id){
    this->numero = id;
}
int funcion::getCantAsientos(){
    return this->cantAsientos;
}
void funcion::setCantAsientos(int cantA){
    this->cantAsientos = cantA;
}
float funcion::getCosto(){
    return this->costo;
}
void funcion::setCosto(float costo){
    this->costo = costo;
}
DtFecha* funcion::getFecha(){
    return this->fecha;
}
void funcion::setFecha(DtFecha* f){
    this->fecha = f;
}