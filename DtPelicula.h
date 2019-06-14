/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   DtPelicula.h
 * Author: vanessa
 *
 * Created on 13 de junio de 2019, 07:34 PM
 */

#ifndef DTPELICULA_H
#define DTPELICULA_H
#include <string>
using namespace std;
class DtPelicula {
public:
    DtPelicula();
    DtPelicula(string);
    string getTitulo();
    virtual ~DtPelicula();
private:
    string titulo;

};

#endif /* DTPELICULA_H */

