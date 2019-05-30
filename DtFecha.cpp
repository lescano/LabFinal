/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

#include "DtFecha.h"

DtFecha::DtFecha(int a, int m, int d, int h, int min, int s){
    this->anio = a;
    this->mes = m;
    this->dia = d;
    this->hora = h;
    this->minutos = min;
    this->segundos = s;
}

int DtFecha::getAnio(){
    return this->anio;
}

int DtFecha::getMes(){
    return this->mes;
}

int DtFecha::getDia(){
    return this->dia;
}

int DtFecha::getHora(){
    return this->hora;
}

int DtFecha::getMinutos(){
    return this->minutos;
}

int DtFecha::getSegundos(){
    return this->segundos;
}