/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

#include "Reserva.h"
#include "Usuario.h"

Reserva::Reserva(Usuario* usuario, Funcion* funcion,string financiera, int asientos){
    this->cant_asientos = asientos;
    this->costo_total = 0;
//    usuario->setPuntaje(this);
    this->funcionReservada = funcion;
}

void Reserva::setCosto_total(float c) {
    this->costo_total = c;
}

void Reserva::setCant_asientos(int a){
    this->cant_asientos = a;
}

float Reserva::getCosto_total() {
    return this->costo_total;
}

int Reserva::getCant_asientos(){
    return this->cant_asientos;
}

Reserva::~Reserva(){

}