/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Usuario.h
 * Author: vanessa
 *
 * Created on 24 de abril de 2019, 09:50 PM
 */

#ifndef USUARIO_H
#define USUARIO_H
#include <string>
#include "usuPeli.h"
#include "Reserva.h"
#include "Pago.h"
using namespace std;

class usuario {
private:
    string nickname;
    string img_perfil;
    string contrasenia;
    //Colleccion de puntajes
    //Colleccion de reservas
    //Coleccion de los tipos de pago que tengo
public:
    usuario(string, string, string);
    ~usuario();
    string getNickname();
    void setNickname(string);
    string getImg_perfil();
    void setImg_perfil(string);
    string getContrasenia();
    void setContrasenia(string);
};

#endif /* USUARIO_H */

