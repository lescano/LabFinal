/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

#include "Credito.h"

Credito::Credito( string financiera, float descuento){
    this->descuento = descuento;
    this->financiera = financiera;
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
