/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   sistema.h
 * Author: vanessa
 *
 * Created on 8 de mayo de 2019, 03:22 PM
 */

#ifndef SISTEMA_H
#define SISTEMA_H
#include <string>
using namespace std;

class sistema {
private:
public:
    // constructores seters geters y destructor
    sistema();
    ~sistema();
    //**************************************************
    
    //dss iniciar sesion
    void ingresar(string nickname);
    bool ingresarContrasenia(string psw);
    // dss alta cine
    void ingresarDireccion(string dire);
    void ingresarCapacidadSala(int cap);
    //dss puntuar pelicula
    void ingresarNuevoPuntaje(int puntos);
    void ingresarPuntaje(int puntos);
    //***************************************************
    //dss iniciar sesion
    void iniciarSesion();
    // dss alta cine
    void altaSala();
    void altaCine();
    //dss alta funcion
    void altaFuncion();
    //dss comentar pelicula
    void crearComentario(string comentario);
    void crearRespuesta(string respuesta);
    
    //****************************************************
    //dss alta funcion
    //setstring listarPeliculas();
    DtCine** listarCines();
    DtSala** listarSalas();
    //dss comentar pelicula
    DtComentario** listarComentarios();
    //dss ver informacion de pelicula
    DtFuncion** listarFunciones(DtFecha fecha);
    
    //****************************************************
    //dss alta funcion
    void seleccionarPelicula(string tituloP);
    void seleccionarCine(int nro_cine);
    void seleccionarSala(int nro_sala);
    //dss comentar pelicula
    void seleccionarComentario(int idCom);
    
    //****************************************************
    //dss puntuar pelicula
    int mostrarPuntaje();
    //dss alta funcion
    void fechaFuncion (DtFecha fecha);
    //dss ver informacion de pelicula
    DtInfoPeli verInfoPeli();
    //dss ver comentarios y puntajes de pelicula
    DtCom_Puntaje verComentario_puntaje();
    
    //****************************************************
    //dss alta funcion
    void finalizar();
    //dss eliminar pelicula
    void borrarPelicula();
    //dss ver informacion de pelicula
    void cancelarSeleccion();
    
};

#endif /* SISTEMA_H */

