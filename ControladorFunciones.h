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

class ControladorFuncion : public ICFuncion {
public:
    fechaFuncion();
    altaFuncion();
    listarFunciones();
    seleccionarFunciones();
    cantAsientos();
    reservaCredito();
    reservaDebito();
    precioTotal();
    crearReserva();
    cancelar();
    cancelarSeleccion();
};


#endif /* CONTROLADORFUNCIONES_H */

