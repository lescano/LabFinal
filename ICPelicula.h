/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   ICPelicula.h
 * Author: vanessa
 *
 * Created on 30 de mayo de 2019, 01:07 AM
 */

#ifndef ICPELICULA_H
#define ICPELICULA_H
#include <string>
#include "DtCine.h"
#include "DtInfoPeli.h"
#include "Pelicula.h"
#include "DtComentario.h"
#include "DtFuncion.h"



using namespace std;

class ICPelicula {
public: 
    virtual void borrarPelicula()=0;
    virtual void ingresarNuevoPuntaje()=0;
    virtual void ingresarPuntaje()=0;
    virtual string** listarPeliculas()=0;
    virtual DtCine listarCines()=0;
    virtual int mostrarPuntaje()=0;
    virtual Pelicula* seleccionarPeliculas(string)=0;
    virtual bool tienePuntaje()=0;
    virtual DtInfoPeli* verInfoPeli()=0;
    virtual DtComentario** listarComentarios()=0;
    virtual void crearComentarios(string)=0;
    virtual Opinion* seleccionarComentarios(string)=0;
    virtual void crearRespuesta(string)=0;
    virtual Cine* seleccionarCines(int)=0;
    virtual ICollection* listarFunciones(Cine*)=0;
};

#endif /* ICPELICULA_H */

