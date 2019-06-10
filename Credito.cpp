/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

#include "Credito.h"

Credito::Credito(float d, string f){
    this->descuento = d;
    this->financiera = f;
}

float Credito::getDescuento(){
    return this->descuento;
}

string Credito::getFinanciera(){
    return this->financiera;
}

void Credito::setDescuento(float d){
    this->descuento = d;
}

void Credito::setFinanciera(string f){
    this->financiera = f;
}

Credito::~Credito(){
    
}