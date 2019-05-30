/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

#include "Usuario.h"
#include <string>
using namespace std;

usuario::usuario(string nickname, string imagen, string contra){
    this->nickname = nickname;
    this->img_perfil = imagen;
    this->contrasenia = contra;
}

string usuario::getNickname(){
    return this->nickname;
}

string usuario::getImg_perfil(){
    return this->img_perfil;
}

string usuario::getContrasenia(){
    return this->contrasenia;
}

void usuario::setNickname(string nickname){
    this->nickname = nickname;
}

void usuario::setImg_perfil(string imagen){
    this->img_perfil = imagen;
}

void usuario::setContrasenia(string contra){
    this->contrasenia = contra;
}