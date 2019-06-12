/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

#include "DtFecha.h"

DtFecha::DtFecha(int dia, int mes, int anio, int hora, int minutos, int segundos){
    this->dia = dia;
    this->mes = mes;
    this->anio = anio;
    this->hora = hora;
    this->minutos = minutos;
    this->segundos = segundos;
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

void DtFecha::setDia(int dia){
    this->dia=dia;
}

void DtFecha::setMes(int mes){
    this->mes=mes;
}

void DtFecha::setAnio(int anio){
    this->anio=anio;
}

void DtFecha::setHora(int hora){
    this->hora=hora;
}

void DtFecha::setMinutos(int minutos){
    this->minutos=minutos;
}
void DtFecha::setSegundos(int segundos){
    this->segundos=segundos;
}

ostream &operator << (ostream &salida, DtFecha& fecha){
    
    salida << fecha.getHora() << ":" << fecha.getMinutos() << ":" << fecha.getSegundos() << " " 
            <<fecha.getDia() << "/" << fecha.getMes() << "/" << fecha.getAnio() << endl;
    salida << endl;
    
    return salida;
}