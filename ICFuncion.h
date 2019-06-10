/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   ICFuncion.h
 * Author: vanessa
 *
 * Created on 30 de mayo de 2019, 01:21 AM
 */

#ifndef ICFUNCION_H
#define ICFUNCION_H
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
using namespace std;
class ICFuncion{
public:
        virtual Cine* seleccionarCine(int)=0;
        virtual Pelicula* seleccionarPelicula(string)=0;
        virtual string** listarPeliculas()=0;
        virtual DtInfoPeli* VerInfoPeli()=0;
        virtual DtCine* listarCine()=0;
        virtual DtFuncion* listarFunciones()=0;
        virtual Funcion* seleccionarFunciones(int)=0;
        virtual void cantAsientos(int)=0;
        virtual float reservaCredito(int)=0;
        virtual void reservaDebito(string)=0;
        virtual int precioTotal()=0;
        virtual void crearReserva()=0;
};

#endif /* ICFUNCION_H */

