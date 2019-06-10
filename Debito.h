/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Debito.h
 * Author: vanessa
 *
 * Created on 25 de abril de 2019, 12:32 PM
 */

#ifndef DEBITO_H
#define DEBITO_H
#include "Pago.h"

#include <string>
#include "Pago.h"
using namespace std;

class Debito : public Pago {
private: 
    string banco_emisor;
public:
    Debito(string);
    string getBanco_emisor();
    void setBanco_emisor(string);
    ~Debito();
};

#endif /* DEBITO_H */

