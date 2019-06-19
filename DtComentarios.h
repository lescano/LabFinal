/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   DtComentarios.h
 * Author: Danilo
 *
 * Created on 17 de junio de 2019, 19:59
 */

#ifndef DTCOMENTARIOS_H
#define DTCOMENTARIOS_H

#include "ICollectible.h"

#include <string>

using namespace std;

class DtComentarios : public ICollectible{
public:
    DtComentarios(string, string);
    virtual ~DtComentarios();
    string getComentario();
    string getNickname();
    
private:
    string texto, nickName;

};

#endif /* DTCOMENTARIOS_H */

