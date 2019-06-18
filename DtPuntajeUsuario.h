/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   DtPuntajeUsuario.h
 * Author: Danilo
 *
 * Created on 17 de junio de 2019, 18:22
 */

#ifndef DTPUNTAJEUSUARIO_H
#define DTPUNTAJEUSUARIO_H
#include "ICollectible.h"
#include <iostream>

using namespace std;

class DtPuntajeUsuario : public ICollectible{
public:
    DtPuntajeUsuario(string,int);
    virtual ~DtPuntajeUsuario();
private:
    string nickName;
    int puntaje;

};

#endif /* DTPUNTAJEUSUARIO_H */

