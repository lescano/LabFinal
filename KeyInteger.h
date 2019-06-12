/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   KeyInteger.h
 * Author: Danilo
 *
 * Created on 11 de junio de 2019, 20:29
 */

#ifndef KEYINTEGER_H
#define KEYINTEGER_H

#include "IKey.h"

#include <iostream>

using namespace std;

class KeyInteger : public IKey{
public:
    KeyInteger(int);
    virtual ~KeyInteger();
    
    int getintKEY() const;
    bool equals(IKey* key);
private:
    int keyInt;

};

#endif /* KEYINTEGER_H */

