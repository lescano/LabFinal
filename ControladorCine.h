/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   ControladorCine.h
 * Author: vanessa
 *
 * Created on 30 de mayo de 2019, 01:28 AM
 */

#ifndef CONTROLADORCINE_H
#define CONTROLADORCINE_H

#include "ICCines.h"
#include "ControladorUsuario.h"
#include "ControladorPelicula.h"
#include "Cine.h"
#include "Sala.h"
#include "Funcion.h"
#include "Pelicula.h"
#include "DtCine.h"
#include "DtSala.h"
#include "DtFuncion.h"

#include <cstddef>

class ControladorCine :public ICCines {
    private:
        ControladorUsuario* usuario;
        ControladorPelicula* pelicula;
        Cine* cine;
        Sala* sala;
        Funcion* funcion;
        ControladorCine();
        static ControladorCine* instancia;
    
    public:
        static ControladorCine* getInstancia();
        
        void ingresarDireccion(string);
        void ingresarCapacidadSalas(int);
        DtCine* listarCines();
        string* listarPeliculas();
        Cine* seleccionarCine(int);
        Pelicula* seleccionarPelicula(string);
        void altaSala();
        void altaCine();
        DtSala* listarSalas();
        Sala* seleccionarSala(int);
};

#endif /* CONTROLADORCINE_H */

