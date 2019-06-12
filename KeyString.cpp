/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   KeyString.cpp
 * Author: Danilo
 * 
 * Created on 11 de junio de 2019, 21:17
 */

#include "KeyString.h"

KeyString::KeyString(string keyString) {
    this->keyString=keyString;
}


KeyString::~KeyString() {
}

string KeyString::getStringKey() const{
    return this->keyString;
}

bool KeyString::equals(IKey* key){
    KeyString* s = dynamic_cast<KeyString*>(key);
    if(s==NULL)
        throw std::invalid_argument("Clave invalida");
    if(s->keyString.compare(keyString)==0)
        return true;
    else
        return false;
}

