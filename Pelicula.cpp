/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

#include "Pelicula.h"
#include "KeyInteger.h"
#include "ListaDicc.h"
#include "Cine.h"

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

void Pelicula::setCine(Cine* cine){
    this->cines->add(cine, new KeyInteger(cine->generarId()));
}

bool Pelicula::esPelicula(string titulo){
    if(this->titulo.compare(titulo)==0)
        return true;
    else
        return false;
}

DtInfoPeli* Pelicula::verInfoPeli(){
//    DtInfoPeli* info = new DtInfoPeli(this->posterURL,this->sinopsis);
//    return info;
}

int** Pelicula::listarCine(){
    IIterator* itCines = this->cines->getIteratorObj();
    int** listaCines = new int* [10];
    int* cine;

    int i=0;
    while(itCines->hasNext()){
        Cine* c = (Cine* )itCines->getCurrent();
        cine= new int(c->getNro_cine());
        listaCines [i]= cine;
        itCines->next();
        i++;
    }
    listaCines [i]=NULL;
    return listaCines;
    
    
}
Pelicula::~Pelicula(){
    
}