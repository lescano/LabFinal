/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   DtComentario.h
 * Author: vanessa
 *
 * Created on 8 de mayo de 2019, 04:10 PM
 */

#ifndef DTCOMENTARIO_H
#define DTCOMENTARIO_H
#include <string>
using namespace std;

class DtComentario {
private:
    string texto;
    int idCom;
public:
    DtComentario(int, string);
    string getTexto();
    int getIdCom();
    ~DtComentario();
};

#endif /* DTCOMENTARIO_H */

