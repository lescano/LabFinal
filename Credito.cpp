/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

#include "Credito.h"

credito::credito(float d, string f){
    this->descuento = d;
    this->financiera = f;
}

float credito::getDescuento(){
    return this->descuento;
}

string credito::getFinanciera(){
    return this->financiera;
}

void credito::setDescuento(float d){
    this->descuento = d;
}

void credito::setFinanciera(string f){
    this->financiera = f;
}