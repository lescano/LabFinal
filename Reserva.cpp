/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

#include "Reserva.h"

reserva::reserva(int asientos, float costo){
    this->cant_asientos = asientos;
    this->costo_total = costo;
}

void reserva::setCosto_total(float c) {
    this->costo_total = c;
}

void reserva::setCant_asientos(int a){
    this->cant_asientos = a;
}

float reserva::getCosto_total() {
    return this->costo_total;
}

int reserva::getCant_asientos(){
    return this->cant_asientos;
}