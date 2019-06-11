/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
#include <string>

#include "Opinion.h"

using namespace std;


Opinion::Opinion(Usuario* usuario, Pelicula* pelicula, string comentario){
    this->comentario = comentario;
//    this->id=id;
}

Opinion::Opinion(Usuario* usuario, Opinion* opinion, string comentario){
    this->comentario = comentario;
//    this->id=id;
}

string Opinion::getComentario(){
    return this->comentario;
}
void Opinion::setComentario(string c){
    this->comentario = c;
}

int Opinion::getId(){
    return this->id;
}
void Opinion::setId(int id){
    this->id=id;
}

Opinion::~Opinion(){
    
}