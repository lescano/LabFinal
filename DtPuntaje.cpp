/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   DtPuntaje.cpp
 * Author: Danilo
 * 
 * Created on 15 de junio de 2019, 17:40
 */

#include "DtPuntaje.h"

DtPuntaje::DtPuntaje(Pelicula* pelicula, int puntos) {
    this->pelicula=pelicula;
    this->puntos=puntos;
}

DtPuntaje::~DtPuntaje() {
}

