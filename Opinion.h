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

#include "ICollectible.h"
#include "IDictionary.h"

using namespace std;

class Usuario;
class Pelicula;

class Opinion : public ICollectible{
private:
    string comentario;
    int id=0;
    Usuario* usuario;
    IDictionary* coleccionComentarios;
public:
    Opinion(Usuario*, string);
    ~Opinion();
    string getComentario();
    void setColComentario(Opinion*);
    int getId();
    int generarId();
    Usuario* getUsuario();
};

#endif /* OPINION_H */

