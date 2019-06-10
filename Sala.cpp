/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

#include "Sala.h"

Sala::Sala(int nro, int cap){
    this->nroSala = nro;
    this->capacidad = cap;
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