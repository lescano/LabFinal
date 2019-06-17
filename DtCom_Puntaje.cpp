/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

#include "DtCom_Puntaje.h"


DtCom_Puntaje::DtCom_Puntaje(float puntajePromedio, int cantPuntuaciones, DtComentario* comentarios, DtPuntaje* puntaje){
    this->puntajePromedio=puntajePromedio;
    this->cantPuntuaciones=cantPuntuaciones;
    this->comentarios=comentarios;
    this->puntaje=puntaje;
}


DtCom_Puntaje::~DtCom_Puntaje(){
    
}