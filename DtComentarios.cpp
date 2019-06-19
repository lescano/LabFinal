/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   DtComentarios.cpp
 * Author: Danilo
 * 
 * Created on 17 de junio de 2019, 19:59
 */

#include "DtComentarios.h"

DtComentarios::DtComentarios(string texto, string nickName) {
    this->texto=texto;
    this->nickName=nickName;
}
string DtComentarios::getNickname(){
    return this->nickName;
}
string DtComentarios::getComentario(){
    return this->texto;
}


DtComentarios::~DtComentarios() {
}

