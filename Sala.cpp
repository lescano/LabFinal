/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

#include "Sala.h"
#include "ListaDicc.h"
#include "KeyInteger.h"
#include "Funcion.h"

Sala::Sala(int cap){
    this->nroSala = generarId();
    this->capacidad = cap;
    this->funciones = new ListDicc();
}

int Sala::getNro_sala(){
    return this->nroSala;
}

int Sala::getCapacidad(){
    return this->capacidad;
}

void Sala::setNro_sala(int nro){
    this->nroSala = nro;
}

void Sala::setCapacidad(int cap) {
    this->capacidad = cap;
}

int Sala::generarId(){
    return id+1;
}

void Sala::setFunciones(Funcion* funcion){
    this->funciones->add(funcion, new KeyInteger(funcion->getIdFuncion()));
}

Sala::~Sala(){

}