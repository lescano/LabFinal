/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   ControladorPelicula.h
 * Author: vanessa
 *
 * Created on 30 de mayo de 2019, 01:25 AM
 */

#ifndef CONTROLADORPELICULA_H
#define CONTROLADORPELICULA_H

#include "ICPelicula.h"
#include "IIterator.h"
#include "DtPelicula.h"
#include "ControladorUsuario.h"
#include "DtCom_Puntaje.h"

#include <string.h>

#define MAX_PELICULAS 10

class ControladorPelicula : public ICPelicula {
  private:   
        ControladorPelicula();
        static ControladorPelicula* instancia;
        ICollection* coleccionPeliculas;
        Pelicula* peliculaRecordada;
        Usuario* usuarioRecordada;
        ControladorUsuario* controladorUsuario;
    
    public:
        static ControladorPelicula* getInstancia();
        
        void borrarPelicula();
        void ingresarNuevoPuntaje(int);
        void ingresarPuntaje(int);
        string** listarPeliculas();
        int** listarCines();
        int mostrarPuntaje();
        void seleccionarPeliculas(string);
        bool tienePuntaje();
        DtInfoPeli* verInfoPeli();
        DtComentarios** listarComentarios();
        void crearComentarios(string);
        Opinion* seleccionarComentarios(string);
        void crearRespuesta(string);
        Cine* seleccionarCines(int);
        ICollectible* listarFunciones(DtFecha*);
        Pelicula* getPeliculaRecordada();
        ICollection* getColeccionPeliculas();
        Usuario* getUsuarioRecordado();
        DtCom_Puntaje* verComentariosPuntaje();
};


#endif /* CONTROLADORPELICULA_H */

