/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

#include "Usuario.h"
#include <string>

using namespace std;

Usuario::Usuario(string nickname, string imagen, string contra, tipoUsuario tipo){
    this->nickname = nickname;
    this->img_perfil = imagen;
    this->contrasenia = contra;
    this->tipo=tipo;
    this->puntajes=NULL;
    this->reservas=NULL;
    this->tipoPago=NULL;
}

string Usuario::getNickname(){
    return this->nickname;
}

string Usuario::getImg_perfil(){
    return this->img_perfil;
}

string Usuario::getContrasenia(){
    return this->contrasenia;
}

void Usuario::setNickname(string nickname){
    this->nickname = nickname;
}

void Usuario::setImg_perfil(string imagen){
    this->img_perfil = imagen;
}

void Usuario::setContrasenia(string contra){
    this->contrasenia = contra;
}

Usuario::~Usuario(){
    
}