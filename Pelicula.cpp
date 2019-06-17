/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

#include "Pelicula.h"
#include "KeyInteger.h"
#include "ListaDicc.h"

Pelicula::Pelicula(){}

Pelicula::Pelicula(string tit, string sinopsis, string poster){
    this->titulo = tit;
    this->posterURL = poster;
    this->sinopsis = sinopsis;
    this->puntajeTotal = 0;
    this->opinion=new ListDicc();
    this->cines=new ListDicc();
}
string Pelicula::getTitulo(){
    return this->titulo;
}
void Pelicula::setTitulo(string t){
    this->titulo = t;
}
string Pelicula::getPoster_url(){
    return this->posterURL;
}
void Pelicula::setPoster_url(string p){
    this->posterURL = p;
}
string Pelicula::getSinopsis(){
    return this->sinopsis;
}
void Pelicula::setSinopsis(string s){
    this->sinopsis = s;
}
float Pelicula::getPuntaje_total(){
    return this->puntajeTotal;
}
void Pelicula::setPuntaje_total(int puntos){
    this->puntajeTotal = puntos;
}

bool Pelicula::seleccionarPelicula(string titulo){
    if(this->titulo.compare(titulo)==0)
        return true;
    return false;
}

void Pelicula::setOpinion(Opinion* opinion){
    this->opinion->add(opinion,new KeyInteger(opinion->generarId()));
}

bool Pelicula::esPelicula(string titulo){
    if(this->titulo.compare(titulo)==0)
        return true;
    else
        return false;
}

Pelicula::~Pelicula(){
    
}