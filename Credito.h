/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Credito.h
 * Author: vanessa
 *
 * Created on 25 de abril de 2019, 12:32 PM
 */

#ifndef CREDITO_H
#define CREDITO_H

#include "Pago.h"

#include <string>

using namespace std;

class Credito : public Pago {
private:
    float descuento;
    string financiera;
public:
    Credito(float, string);
    float getDescuento();
    string getFinanciera();
    void setDescuento(float);
    void setFinanciera(string);
    ~Credito();
};

#endif /* CREDITO_H */

