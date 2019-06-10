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

class Opinion {
private:
    string comentario;
    string id;
public:
    Opinion(string, string);
    ~Opinion();
    string getComentario();
    void setComentario(string);
    string getId();
    void setId(string);
};

#endif /* OPINION_H */

