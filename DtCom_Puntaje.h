/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   DtCom_Puntaje.h
 * Author: vanessa
 *
 * Created on 8 de mayo de 2019, 04:22 PM
 */

#ifndef DTCOM_PUNTAJE_H
#define DTCOM_PUNTAJE_H
#include "ICollection.h"

class DtCom_Puntaje{
private:
    float puntajePromedio;
    int cantPuntuaciones;
    ICollection* comentarios;
    ICollection* puntajes;
public:
    DtCom_Puntaje();
    ~DtCom_Puntaje();
    float getPuntajePromedio();
    int getCantPuntuaciones();
    ICollection* getDtComentarios();
    ICollection* getDtPuntaje();
    void setDtComentarios(ICollection*);
    void setDtPuntaje(ICollection*);
    void setCantPuntuaciones(int);
    void setPuntajePromedio(float);
};

#endif /* DTCOM_PUNTAJE_H */

