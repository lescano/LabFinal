/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   DtCredito.h
 * Author: Danilo
 *
 * Created on 9 de junio de 2019, 19:56
 */

#ifndef DTCREDITO_H
#define DTCREDITO_H

#include "Credito.h"

class DtCredito {
public:
    DtCredito(Credito*, float descuento);
    ~DtCredito();
private:
    float descuento;
    Credito* credito;

};

#endif /* DTCREDITO_H */

