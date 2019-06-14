/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Pelicula.h
 * Author: vanessa
 *
 * Created on 25 de abril de 2019, 12:27 PM
 */

#ifndef PELICULA_H
#define PELICULA_H
#include <string>
#include "Opinion.h"
//#include "Cine.h"
#include "DtCine.h"
#include "DtFuncion.h"
//#include "Funcion.h"
#include "DtInfoPeli.h"
#include "IDictionary.h"
#include "ICollectible.h"
#include "ICollection.h"

using namespace std;

class Cine;
class Funcion;

class Pelicula : public ICollectible{
private:
    string titulo;
    string posterURL;
    string sinopsis;
    float puntajeTotal;
    IDictionary* opinion;
    IDictionary* cines;
public:
    Pelicula();
    Pelicula(string titulo, string sinopsis, string poster);
    string getTitulo();
    void setTitulo(string);
    string getPoster_url();
    void setPoster_url(string);
    string getSinopsis();
    void setSinopsis(string);
    float getPuntaje_total();
    void setPuntaje_total(float);
    IDictionary* getOpinion();
    void setOpinion(IDictionary*);
    IDictionary* getCine();
    void setCine(IDictionary*);
    
    void borarSalaCineFunc();
    void borrarOpiniones();
    bool esPelicula(string);
    DtCine** listarCine();      //pregunra
    ICollection* listarFunciones(Cine*);     //preguntar
    Funcion* seleccionarFuncion(int idFuncion, Cine*);
    Cine* seleccionarCine(int idCine);
    DtInfoPeli* verInfoPeli();
    bool seleccionarPelicula(string);
    ~Pelicula();
};

#endif /* PELICULA_H */

