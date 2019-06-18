/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

#include "DtCom_Puntaje.h"
#include "Lista.h"


DtCom_Puntaje::DtCom_Puntaje(){
    this->comentarios=new Lista();
    this->puntajes=new Lista();
}

float DtCom_Puntaje::getPuntajePromedio(){
    return this->puntajePromedio;
}

int DtCom_Puntaje::getCantPuntuaciones(){
    return this->cantPuntuaciones;
}

ICollection* DtCom_Puntaje::getDtComentarios(){
    return this->comentarios;
}

ICollection* DtCom_Puntaje::getDtPuntaje(){
    return this->puntajes;
}

void DtCom_Puntaje::setDtComentarios(ICollection* comentario){
    this->comentarios = comentario;
}
void DtCom_Puntaje::setDtPuntaje(ICollection* puntaje){
    this->puntajes = puntaje;
}
void DtCom_Puntaje::setCantPuntuaciones(int cant){
    this->cantPuntuaciones=cant;
}
void DtCom_Puntaje::setPuntajePromedio(float promedio){
    this->puntajePromedio=promedio;
}

DtCom_Puntaje::~DtCom_Puntaje(){
    
}