/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

#include "Cine.h"

Cine::cine(int id, string dire){
    this->nro_cine = id;
    this->direccion = dire;
}

int Cine::getNro_cine(){
    return this->nro_cine;
}

string Cine::getDireccion(){
    return this->direccion;
}

void Cine::setNro_cine(int id){
    this->nro_cine = id;
}

void Cine::setDireccion(string dire){
    this->direccion = dire;
}