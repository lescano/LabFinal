/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   DtCredito.cpp
 * Author: Danilo
 * 
 * Created on 9 de junio de 2019, 19:56
 */

#include "DtCredito.h"

DtCredito::DtCredito(Credito* credito, float descuento) {
    this->credito=credito;
    this->descuento=descuento;
}


DtCredito::~DtCredito() {
}

