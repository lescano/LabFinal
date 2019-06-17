/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

#include "DtFecha.h"

DtFecha::DtFecha(int dia, int mes, int anio, int hora, int minutos, int segundos){
    if(!validarFecha(dia,mes,anio,hora,minutos,segundos))
        throw std::invalid_argument("Fecha no valida. No se guardaron los cambios\n");
    
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

bool DtFecha::validarFecha(int dia, int mes, int anio, int hora, int minutos, int segundos){
        if(anio>0 && hora >= 0 && hora <= 24 && minutos >= 0 && minutos <= 60 && segundos >= 0 && segundos <= 60){
            switch (mes){
                case 1:
                case 3:
                case 5:
                case 7:
                case 8:
                case 10:
                case 12:
                    if(dia >= 1 && dia <= 31)
                        return true;
                    else
                        return false;
                    break;
                case 4:
                case 6:
                case 9:
                case 11:
                    if(dia >= 1 && dia <= 30)
                        return true;
                    else
                        return false;
                case 2:{
                    if(anio%4 == 0 && anio%100 != 0 || anio%400 == 0)
                        if(dia >= 1 && dia <= 29)
                            return true;
                        else
                            return false;
                    else
                        if(dia >= 1 && dia <= 28)
                            return true;
                        else
                            return false;
                }
                default: 
                    return false;
            }
    }
        else
            return false;
}