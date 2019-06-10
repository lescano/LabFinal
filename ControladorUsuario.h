/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   ControladorUsuario.h
 * Author: vanessa
 *
 * Created on 30 de mayo de 2019, 01:33 AM
 */

#ifndef CONTROLADORUSUARIO_H
#define CONTROLADORUSUARIO_H

#include "ICUsuario.h"

#include <string.h>
using namespace std;
class ControladorUsuario : public ICUsuario {
    private:   
        ControladorUsuario();
        static ControladorUsuario* instancia;
    
    public:
        static ControladorUsuario* getInstancia();
      void ingresar(string);
      bool ingresarContrasenia(string);
      void iniciarSesion();
};


#endif /* CONTROLADORUSUARIO_H */

