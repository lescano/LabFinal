/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
#include <string>
using namespace std;
#include "Opinion.h"

opinion::opinion(string comentario){
    this->comentario = comentario;
}
string opinion::getComentario(){
    return this->comentario;
}
void opinion::setComentario(string c){
    this->comentario = c;
}