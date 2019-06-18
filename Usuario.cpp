/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

#include "Usuario.h"
#include "Lista.h"
#include "ListaDicc.h"
#include "Pelicula.h"
#include <string>

using namespace std;

Usuario::Usuario(string nickname, string contra, string imagen, tipoUsuario tipo){
    this->nickname = nickname;
    this->img_perfil = imagen;
    this->contrasenia = contra;
    this->tipo=tipo;
    this->puntajes=new Lista();
    this->reservas=new Lista();
    this->tipoPago=new ListDicc();
}

string Usuario::getNickname(){
    return this->nickname;
}

string Usuario::getImg_perfil(){
    return this->img_perfil;
}

string Usuario::getContrasenia(){
    return this->contrasenia;
}

void Usuario::setNickname(string nickname){
    this->nickname = nickname;
}

void Usuario::setImg_perfil(string imagen){
    this->img_perfil = imagen;
}

void Usuario::setContrasenia(string contra){
    this->contrasenia = contra;
}

bool Usuario::esMiPWD(string psw){
  if (this->contrasenia.compare(psw) == 0)
      return true;
  else
      return false;
}

bool Usuario::tienePuntaje(string titulo) {
    IIterator* it = this->puntajes->iterator();
    while (it->hasNext()) {
        Puntaje* puntos = (Puntaje*) it->getCurrent();
        if (puntos->getPeliculaPuntuada()->esPelicula(titulo))
            return true;
        it->next();
    }
    return false;
}

void Usuario::setPuntaje(Puntaje* puntaje){
    this->puntajes->add(puntaje);
}

void Usuario::setReserva(Reserva* reserva){
    this->reservas->add(reserva);
}

void Usuario::ingresarNuevoPuentaje(int puntos, Pelicula* pelicula) {
    this->setPuntaje(new Puntaje(pelicula, puntos));
}

tipoUsuario Usuario::getTipoUsuario(){
    return this->tipo;
}

int Usuario::verPuntaje(string titulo) {
    IIterator* it = this->puntajes->iterator();

    while (it->hasNext()) {
        Puntaje* p = (Puntaje*) it->getCurrent();
        if (p->esPelicula(titulo))
            return p->getPuntos();
        it->next();
    }
    return 0;
}

Usuario::~Usuario(){
    
}