/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Usuario.h
 * Author: vanessa
 *
 * Created on 24 de abril de 2019, 09:50 PM
 */

#ifndef USUARIO_H
#define USUARIO_H
#include <string>
#include "ICollection.h"
#include "IDictionary.h"
#include "tipoUsuario.h"
#include "DtCredito.h"
#include "DtFuncion.h"
#include "Puntaje.h"
#include "Reserva.h"
#include "Pago.h"
//#include "Cine.h"

using namespace std;

class Cine;

class Usuario : public ICollectible{
private:
    string nickname;
    string img_perfil;
    string contrasenia;
    tipoUsuario tipo;
    ICollection*  puntajes;
    ICollection* reservas;
    IDictionary* tipoPago;
public:
    Usuario(string nick, string contrasenia, string foto, tipoUsuario tipo);
    ~Usuario();
    string getNickname();
    void setNickname(string);
    string getImg_perfil();
    void setImg_perfil(string);
    string getContrasenia();
    void setContrasenia(string);
    tipoUsuario getTipoUsuario();
    void setTipoUsuario(tipoUsuario);
    ICollection* getPuntaje();
    void setPuntaje(Puntaje*);
    ICollection* getReserva();
    void setReserva(Reserva*);
    IDictionary* getTipoPago();
    void setTipoPago(ICollectible*);
    
    void borrarPuntaje(string);
    void borarReservas();
    bool esMiPWD(string);
    void ingresarNuevoPuntaje(Pelicula*, int puntos);
    void ingresarPuntaje(string titulo, int puntos);
    ICollection* listarFunciones(Pelicula* , Cine*);     //preguntar
    int mostrarPuntaje(string);
    DtCredito* reservaCredito(string);
    bool tienePuntaje(string);
    void ingresarNuevoPuentaje(int,Pelicula*);
};

#endif /* USUARIO_H */

