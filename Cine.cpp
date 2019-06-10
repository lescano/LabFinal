/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

#include "Cine.h"

Cine::Cine(int id, string dire, float costo){
    this->nro_cine = id;
    this->direccion = dire;
    this->costo=costo;
}

int Cine::getNro_cine(){
    return this->nro_cine;
}

string Cine::getDireccion(){
    return this->direccion;
}

float Cine::getCosto(){
    return this->costo;
}

void Cine::setNro_cine(int id){
    this->nro_cine = id;
}

void Cine::setDireccion(string dire){
    this->direccion = dire;
}

void Cine::setCosto(float costo){
    this->costo= costo;
}

void Cine::borrarSalas(){
    
}

DtFuncion** Cine::listarFunciones(){
    
}

Funcion* Cine::seleccionarFuncion(int){
    
}