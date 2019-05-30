/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

#include "Sala.h"

sala::sala(int nro, int cap){
    this->nro_sala = nro;
    this->capacidad = cap;
}

int sala::getNro_sala(){
    return this->nro_sala;
}

int sala::getCapacidad(){
    return this->capacidad;
}

void sala::setNro_sala(int nro){
    this->nro_sala = nro;
}

void sala::setCapacidad(int cap) {
    this->capacidad = cap;
}