/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Opinion.h
 * Author: vanessa
 *
 * Created on 25 de abril de 2019, 12:30 PM
 */
#ifndef OPINION_H
#define OPINION_H

#include <iostream>

using namespace std;

class opinion {
private:
    string comentario;
public:
    opinion(string);
    ~opinion();
    string getComentario();
    void setComentario(string);
};

#endif /* OPINION_H */

