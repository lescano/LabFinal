/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
#include <string>

#include "Opinion.h"
#include "KeyInteger.h"
#include "ListaDicc.h"

using namespace std;

Opinion::Opinion(Usuario* usuario, string comentario){
    this->comentario = comentario;
    this->id=generarId();
    this->usuario=usuario;
    this->coleccionComentarios=new ListDicc();
}

string Opinion::getComentario(){
    return this->comentario;
}
void Opinion::setColComentario(Opinion* comentario){
    this->coleccionComentarios->add(comentario, new KeyInteger(comentario->getId()));
}

int Opinion::getId(){
    return this->id;
}

int Opinion::generarId(){
    return id+1;
}


Opinion::~Opinion(){
    
}