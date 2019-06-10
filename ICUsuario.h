/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   ICUsuario.h
 * Author: vanessa
 *
 * Created on 30 de mayo de 2019, 01:24 AM
 */

#ifndef ICUSUARIO_H
#define ICUSUARIO_H
#include <string>
using namespace std;

class ICUsuario{
    public:
        virtual void ingresar(string)=0;
        virtual bool ingresarContrasenia(string)=0;
        virtual void iniciarSesion()=0;
    
    
};

#endif /* ICUSUARIO_H */

