/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

#include "Cine.h"

cine::cine(int id, string dire){
    this->nro_cine = id;
    this->direccion = dire;
}

int cine::getNro_cine(){
    return this->nro_cine;
}

string cine::getDireccion(){
    return this->direccion;
}

void cine::setNro_cine(int id){
    this->nro_cine = id;
}

void cine::setDireccion(string dire){
    this->direccion = dire;
}