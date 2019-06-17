/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

#include "Cine.h"
#include "Sala.h"
#include "ListaDicc.h"

Cine::Cine(string dire, float costo){
    this->nro_cine = generarId();
    this->direccion = dire;
    this->costo=costo;
    this->sala=new ListDicc(); 
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

ICollection* Cine::listarFunciones(){
    
}

Funcion* Cine::seleccionarFuncion(int){
    
}

int Cine::generarId(){
    return id+1;
}

void Cine::setSala(Sala* sala){
    this->sala->add(sala,new KeyInteger(sala->getNro_sala()));
}

Cine::~Cine(){
    
}