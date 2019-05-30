/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   DtInfoPeli.h
 * Author: vanessa
 *
 * Created on 8 de mayo de 2019, 04:19 PM
 */

#ifndef DTINFOPELI_H
#define DTINFOPELI_H
#include <string>
using namespace std;

class DtInfoPeli {
private:
    string poster_url;
    string sinopsis;
public:
    DtInfoPeli(string, string);
    string getPoster_url();
    string getSinopsis();
    ~DtInfoPeli();
};

#endif /* DTINFOPELI_H */

