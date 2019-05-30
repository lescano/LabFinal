/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   DtFecha.h
 * Author: vanessa
 *
 * Created on 25 de abril de 2019, 12:27 PM
 */

#ifndef DTFECHA_H
#define DTFECHA_H

class DtFecha {
private:
    int anio, mes, dia, hora, minutos, segundos;
public:
    DtFecha(int, int, int, int, int, int);
    int getAnio();
    int getMes();
    int getDia();
    int getHora();
    int getMinutos();
    int getSegundos();
    ~DtFecha();
};

#endif /* DTFECHA_H */

