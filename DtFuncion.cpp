/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

#include "DtFuncion.h"

DtFuncion::DtFuncion(int num, int cantA, float costo, DtFecha* fecha){
    this->numero=num;
    this->cantAsientos=cantA;
    this->costo=costo;
    this->fecha=fecha;
}

int DtFuncion::getNumero(){
    return this->numero;
}

int DtFuncion::getCantAsientos(){
    return this->cantAsientos;
}

float DtFuncion::getCosto(){
    return this->costo;
}

DtFecha* DtFuncion::getFecha(){
    return this->fecha;
}

DtFuncion::~DtFuncion(){
    
}