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

class ControladorCine :public ICCines {
    ingresarDireccion();
    ingresarCapacidadSalas();
    altaSala();
    altaCine();
    listarCines();
    seleccionarCine();
    listarSalas();
    seleccionarSala();
};

#endif /* CONTROLADORCINE_H */

