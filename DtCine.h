/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   DtCine.h
 * Author: vanessa
 *
 * Created on 8 de mayo de 2019, 04:06 PM
 */

#ifndef DTCINE_H
#define DTCINE_H

#include <string>
using namespace std;

class DtCine {
private:
    int nro_cine;
    string direccion;
public:
    DtCine(int,string);
    int getNro_cine();
    string getDireccion();
    virtual ~DtCine();
};

#endif /* DTCINE_H */

