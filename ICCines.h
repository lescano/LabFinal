/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   ICCines.h
 * Author: vanessa
 *
 * Created on 30 de mayo de 2019, 01:15 AM
 */

#ifndef ICCINES_H
#define ICCINES_H

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

class ICCines {
public:
    virtual void setDireccion(string) = 0;
    virtual void setCapacidadSalas(int) = 0;
    virtual string** listarCines() = 0;
    virtual string** listarPeliculas() = 0;
    virtual Cine* seleccionarCine(int) = 0;
    virtual Pelicula* seleccionarPelicula(string) = 0;
    virtual void altaSala() = 0;
    virtual void altaCine() = 0;
    virtual ICollection* listarSalas() = 0;
    virtual Sala* seleccionarSala(int) = 0;
    virtual bool* fechaFuncion(DtFecha*) = 0;
    virtual void altaFuncion() = 0;
    virtual IDictionary* getColeccionCines() = 0;
};

#endif /* ICCINES_H */

