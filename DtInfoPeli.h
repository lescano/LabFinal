/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   DtInfoPeli.h
 * Author: eveek
 *
 * Created on 19 de junio de 2019, 09:26 PM
 */

#ifndef DTINFOPELI_H
#define DTINFOPELI_H
#include <string>

using namespace std;

class DtInfoPeli {
public:
    DtInfoPeli(string, string);
    string getPoster_url();
    string getSinopsis();
    virtual ~DtInfoPeli();
private:
    string poster_url;
    string sinopsis;

};

#endif /* DTINFOPELI_H */

