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
using namespace std;

class debito : public pago {
private: 
    string banco_emisor;
public:
    debito(string);
    string getBanco_emisor();
    void setBanco_emisor(string);
    ~debito();
};

#endif /* DEBITO_H */

