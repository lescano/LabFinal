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

#include <iostream>

using namespace std;

class DtFecha {
private:
    int anio, mes, dia, hora, minutos, segundos;
public:
    DtFecha(int dia, int mes, int anio, int hora, int minutos, int segundos);
    int getAnio();
    int getMes();
    int getDia();
    int getHora();
    int getMinutos();
    int getSegundos();
    
    void setAnio(int);
    void setMes(int);
    void setDia(int);
    void setHora(int);
    void setMinutos(int);
    void setSegundos(int);
    
    friend ostream &operator << (ostream& salida,DtFecha& fecha);
    
    ~DtFecha();
};

#endif /* DTFECHA_H */

