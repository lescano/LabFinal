/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

#include "Pelicula.h"
#include "KeyInteger.h"
#include "ListaDicc.h"
#include "Usuario.h"
#include "Lista.h"

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
float Pelicula::getPuntajeTotal(){
    return this->puntajeTotal;
}
void Pelicula::setPuntajeTotal(int puntos){
    this->puntajeTotal += puntos;
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

ICollection* Pelicula::getComentarios() {
    IIterator* it = this->opinion->getIteratorObj();
    ICollection* comentarios = new Lista();
    while (it->hasNext()) {
        Opinion* o = (Opinion*) it->getCurrent();
        comentarios->add(new DtComentarios(o->getComentario(), o->getUsuario()->getNickname()));
        it->next();
    }
    return comentarios;
}

Pelicula::~Pelicula(){
    
}