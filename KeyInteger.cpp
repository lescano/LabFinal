/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   KeyInteger.cpp
 * Author: Danilo
 * 
 * Created on 11 de junio de 2019, 20:29
 */

#include "KeyInteger.h"

KeyInteger::KeyInteger(int keyInt) {
    this->keyInt = keyInt;
}

KeyInteger::~KeyInteger() {
}

int KeyInteger::getintKEY() const{
    return this->keyInt;
}

bool KeyInteger::equals(IKey* key){
    KeyInteger* i = dynamic_cast<KeyInteger*>(key);
    if(i==NULL)
        throw std::invalid_argument("Clave invalida");
    if(i->keyInt==keyInt)
        return true;
    else return false;
}
