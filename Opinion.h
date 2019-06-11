/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Opinion.h
 * Author: vanessa
 *
 * Created on 25 de abril de 2019, 12:30 PM
 */
#ifndef OPINION_H
#define OPINION_H

#include <iostream>

//#include "Usuario.h"
//#include "Pelicula.h"

using namespace std;

class Usuario;
class Pelicula;

class Opinion {
private:
    string comentario;
    int id;
public:
    Opinion(Usuario*, Pelicula*, string);
    Opinion(Usuario*, Opinion*, string);
    ~Opinion();
    string getComentario();
    void setComentario(string);
    int getId();
    void setId(int);
};

#endif /* OPINION_H */

