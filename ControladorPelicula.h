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

#include <string.h>

class ControladorPelicula : public ICPelicula {
  private:   
        ControladorPelicula();
        static ControladorPelicula* instancia;
    
    public:
        static ControladorPelicula* getInstancia();
        
    listarPeliculas();
    seleccionarPeliculas();
    tienePuntaje();
    mostrarPuntaje();
    ingresarNuevoPuntaje();
    ingresarPuntaje();
    listarComentarios();
    crearComentarios();
    seleccionarComentarios();
    crearRespuesta();
    borrarPelicula();
    verInfoPeli();
    verComentarioPuntaje();
};


#endif /* CONTROLADORPELICULA_H */

