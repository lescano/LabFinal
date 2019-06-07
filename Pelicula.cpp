/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

#include "Pelicula.h"

pelicula::pelicula(){}

pelicula::pelicula(string tit, string poster, string sinopsis, float puntos){
    this->titulo = tit;
    this->poster_url = poster;
    this->sinopsis = sinopsis;
    this->puntaje_total = puntos;
}
string pelicula::getTitulo(){
    return this->titulo;
}
void pelicula::setTitulo(string t){
    this->titulo = t;
}
string pelicula::getPoster_url(){
    return this->poster_url;
}
void pelicula::setPoster_url(string p){
    this->poster_url = p;
}
string pelicula::getSinopsis(){
    return this->sinopsis;
}
void pelicula::setSinopsis(string s){
    this->sinopsis = s;
}
float pelicula::getPuntaje_total(){
    return this->puntaje_total;
}
void pelicula::setPuntaje_total(float puntos){
    this->puntaje_total = puntos;
}
