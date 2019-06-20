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
#include "DtComentarios.h"
#include "DtFuncion.h"
#include "DtPelicula.h"
#include "IDictionary.h"
#include "DtCom_Puntaje.h"



using namespace std;

class ICPelicula {
public: 
    virtual void borrarPelicula()=0;
    virtual void ingresarNuevoPuntaje(int)=0;
    virtual void ingresarPuntaje(int)=0;
    virtual string** listarPeliculas()=0;
    virtual ICollection* listarCines()=0;
    virtual int mostrarPuntaje()=0;
    virtual void seleccionarPeliculas(string)=0;
    virtual bool tienePuntaje()=0;
    virtual DtInfoPeli* verInfoPeli()=0;
    virtual DtComentarios** listarComentarios()=0;
    virtual void crearComentarios(string)=0;
    virtual Opinion* seleccionarComentarios(string)=0;
    virtual void crearRespuesta(string)=0;
    virtual Cine* seleccionarCines(int)=0;
    virtual ICollectible* listarFunciones(DtFecha*)=0;
    virtual ICollection* getColeccionPeliculas() = 0;
    virtual Usuario* getUsuarioRecordado() = 0;
    virtual DtCom_Puntaje* verComentariosPuntaje() = 0;
};

#endif /* ICPELICULA_H */

