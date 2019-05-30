/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

#include "usuPeli.h"

usuPeli::usuPeli(int p){
    this->puntos = p;
}

int usuPeli::getPuntos(){
    return this->puntos;
}

void usuPeli::setPuntos(int p){
    this->puntos = p;
}