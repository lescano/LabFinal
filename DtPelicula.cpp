/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   DtPelicula.cpp
 * Author: vanessa
 * 
 * Created on 13 de junio de 2019, 07:34 PM
 */

#include "DtPelicula.h"

DtPelicula::DtPelicula() {
}

DtPelicula::DtPelicula(string tit) {
    this->titulo = tit;
}

string DtPelicula::getTitulo(){
    return this->titulo;
}

DtPelicula::~DtPelicula() {
}

