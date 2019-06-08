/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

#include "Pelicula.h"

Pelicula::pelicula(){}

Pelicula::pelicula(string tit, string poster, string sinopsis, float puntos){
    this->titulo = tit;
    this->poster_url = poster;
    this->sinopsis = sinopsis;
    this->puntaje_total = puntos;
}
string Pelicula::getTitulo(){
    return this->titulo;
}
void Pelicula::setTitulo(string t){
    this->titulo = t;
}
string Pelicula::getPoster_url(){
    return this->poster_url;
}
void Pelicula::setPoster_url(string p){
    this->poster_url = p;
}
string Pelicula::getSinopsis(){
    return this->sinopsis;
}
void Pelicula::setSinopsis(string s){
    this->sinopsis = s;
}
float Pelicula::getPuntaje_total(){
    return this->puntaje_total;
}
void Pelicula::setPuntaje_total(float puntos){
    this->puntaje_total = puntos;
}
