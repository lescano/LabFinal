/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   KeyString.h
 * Author: Danilo
 *
 * Created on 11 de junio de 2019, 21:17
 */

#ifndef KEYSTRING_H
#define KEYSTRING_H

#include "IKey.h"
#include <iostream>

using namespace std;

class KeyString {
public:
    KeyString(string keyString);
    virtual ~KeyString();
    
    string getStringKey() const;
    bool equals(IKey* key);
private:
    string keyString;

};

#endif /* KEYSTRING_H */

