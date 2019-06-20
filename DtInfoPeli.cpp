
#include "DtInfoPeli.h"



DtInfoPeli::DtInfoPeli(string poster, string sinopsis) {
    this->poster_url=poster;
    this->sinopsis=sinopsis;
}

string DtInfoPeli::getPoster_url(){
    return this->poster_url;
}

string DtInfoPeli::getSinopsis(){
    return this->sinopsis;
}

DtInfoPeli::~DtInfoPeli() {
}

