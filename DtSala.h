/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   DtSala.h
 * Author: vanessa
 *
 * Created on 8 de mayo de 2019, 04:08 PM
 */

#ifndef DTSALA_H
#define DTSALA_H

class DtSala {
private:
    int nro_sala;
    int capacidad;
public:
    DtSala(int, int);
    ~DtSala();
    int getNro_sala();
    int getCapacidad();
};
#endif /* DTSALA_H */

