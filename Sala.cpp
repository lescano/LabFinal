/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

#include "Sala.h"

Sala::sala(int nro, int cap){
    this->nro_sala = nro;
    this->capacidad = cap;
}

int Sala::getNro_sala(){
    return this->nro_sala;
}

int Sala::getCapacidad(){
    return this->capacidad;
}

void Sala::setNro_sala(int nro){
    this->nro_sala = nro;
}

void Sala::setCapacidad(int cap) {
    this->capacidad = cap;
}