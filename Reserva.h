/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Reserva.h
 * Author: vanessa
 *
 * Created on 25 de abril de 2019, 12:28 PM
 */

#ifndef RESERVA_H
#define RESERVA_H
#include "Pago.h"
#include "Funcion.h"

class reserva {
private:
    int cant_asientos;
    float costo_total;
    pago* mecanismoDePago;
    funcion* funcionReservada;
public:
    reserva(int, float);
    int getCant_asientos();
    void setCant_asientos(int);
    float getCosto_total();
    void setCosto_total(float);
    ~reserva();
};

#endif /* RESERVA_H */

