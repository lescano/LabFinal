/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   ControladorFunciones.h
 * Author: vanessa
 *
 * Created on 30 de mayo de 2019, 01:30 AM
 */

#ifndef CONTROLADORFUNCIONES_H
#define CONTROLADORFUNCIONES_H

#include "ICFuncion.h"
#include "Cine.h"
#include "Pelicula.h"
#include "ControladorUsuario.h"
#include "ControladorPelicula.h"
#include "Usuario.h"
#include "ICollection.h"
#include "DtInfoPeli.h"
#include "DtFuncion.h"
#include "DtCine.h"

#include <string.h>

class ControladorFuncion : public ICFuncion {
    private:
        ControladorUsuario* controladorUsuario;
        ControladorPelicula* controladorPelicula;
        Pelicula* peliculaRecordada;
        Usuario* usuarioRecordado;
        ICollection* coleccionReservas;
        
        ControladorFuncion();
        static ControladorFuncion* instancia;
    
    public:
        static ControladorFuncion* getInstancia();
        

        Cine* seleccionarCine(int);
        Pelicula* seleccionarPelicula(string);
        string** listarPeliculas();
        DtInfoPeli* VerInfoPeli();
        DtCine* listarCine();
        DtFuncion* listarFunciones();
        Funcion* seleccionarFunciones(int);
        void cantAsientos(int);
        float reservaCredito(int);
        void reservaDebito(string);
        int precioTotal();
        void crearReserva();
};


#endif /* CONTROLADORFUNCIONES_H */

