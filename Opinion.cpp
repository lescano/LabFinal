/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
#include <string>
using namespace std;
#include "Opinion.h"

Opinion::Opinion(string comentario, string id){
    this->comentario = comentario;
    this->id=id;
}
string Opinion::getComentario(){
    return this->comentario;
}
void Opinion::setComentario(string c){
    this->comentario = c;
}

string Opinion::getId(){
    return this->id;
}
void Opinion::setId(string id){
    this->id=id;
}

Opinion::~Opinion(){
    
}