/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

#include "Debito.h"
#include <string>
using namespace std;

Debito::Debito(string b):Pago() {
    this->banco_emisor = b;
}

string Debito::getBanco_emisor(){
    return this->banco_emisor;
}

void Debito::setBanco_emisor(string b){
    this->banco_emisor = b;
}

Debito::~Debito(){
    
}