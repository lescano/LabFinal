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
        ControladorUsuario* controladorUsuario;
        ControladorPelicula* controladorPelicula;
        IDictionary* coleccionCines;
        Cine* cineRecordado;
        Sala* salaRecordada;
        Funcion* funcionRecordada;
        string direccion;
        int capacidadSala;
        
        ControladorCine();
        static ControladorCine* instancia;
    public:
        static ControladorCine* getInstancia();
        
        void setDireccion(string);
        void setCapacidadSalas(int);
        ICollection* listarCines();
        string** listarPeliculas();
        Cine* seleccionarCine(int);
        Pelicula* seleccionarPelicula(string);
        void altaSala();
        void altaCine();
        ICollection* listarSalas();
        Sala* seleccionarSala(int);
        bool* fechaFuncion(DtFecha*);
        void altaFuncion();
        IDictionary* getColeccionCines();
        
};

#endif /* CONTROLADORCINE_H */

