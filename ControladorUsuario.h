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
#include "DtFecha.h"
#include "Usuario.h"
#include "IDictionary.h"
#include "ListaDicc.h"
#include "DtPuntajeUsuario.h"

#include <string.h>
using namespace std;
class ControladorUsuario : public ICUsuario {
    private:   
        ControladorUsuario();
        static ControladorUsuario* instancia;
        DtFecha* horaSistema;
        Usuario* usuarioRecordado;
        IDictionary* usuarios;
        ICollection* pagos;
        string nickname, psw;
    
    public:
        static ControladorUsuario* getInstancia();

        DtFecha* getHoraSistema();
        void setHoraSistema(DtFecha*);
        void ingresar(string);
        bool ingresarContrasenia(string);
        void iniciarSesion();
        string getNickname();
        IDictionary* getUsuarios();
        ICollection* getPagos();
        Usuario* getUsuarioRecordado();
        void cerrarSesion();
        ICollection* verPuntajes(string);
};


#endif /* CONTROLADORUSUARIO_H */

