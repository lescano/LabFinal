/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: vanessa
 *
 * Created on 24 de abril de 2019, 09:45 PM
 */

#include <cstdlib>
#include <iostream>
#include <chrono>
#include <thread>
#include <stdio.h>

#include "Cine.h"
#include "Credito.h"
#include "Debito.h"
#include "DtFecha.h"
#include "Funcion.h"
#include "Opinion.h"
#include "Pago.h"
#include "Pelicula.h"
#include "Reserva.h"
#include "Sala.h"
#include "Puntaje.h"
#include "Usuario.h"
#include "Fabrica.h"
#include "DtPelicula.h"

void menu();
void Pausa();
void Borrar();
void datosDePrueba();
void actualizarFecha();
void verFecha();
bool validarFecha(int,int,int,int,int,int);

void iniciarSesion();
void crearReserva();
void altaCine();
void altaFuncion();
void puntuarPelicula();
void comentarPelicula();
void verInformacionPelicula();
void verComentariosPuntajePelicula();
void eliminarPelicula();
void verReserva();
void cerrarSesion();
void modificarFechaSistema();
void consultarFechaSistema();
void cargarDatosPrueba();

using namespace std;

Fabrica* f = f->getInstancia();
ICUsuario* controladorUsuario = f->getInterfaceUsuario();
ICPelicula* controladorPelicula = f->getInterfacePelicula();


int main(int argc, char** argv) {
    char op;
    bool salir=false;
    
    actualizarFecha();
    
    while(!salir){
        Pausa();
        Borrar();
        menu();
        cin>>op;
        fflush(stdin);

        Borrar();
        try {
            switch (op) {
                case 'a':
                    iniciarSesion();
                    break;
                case 'b':
                    crearReserva();
                    break;
                case 'c':
                    altaCine();
                    break;
                case 'd':
                    altaFuncion();
                    break;
                case 'e':
                    puntuarPelicula();
                    break;
                case 'f':
                    comentarPelicula();
                    break;
                case 'g':
                    verInformacionPelicula();
                    break;
                case 'h':
                    verComentariosPuntajePelicula();
                    break;
                case 'i':
                    eliminarPelicula();
                    break;
                case 'j':
                    verReserva();
                    break;
                case 'k':
                    cerrarSesion();
                    break;
                case 'l':
                    modificarFechaSistema();
                    break;
                case 'm':
                    consultarFechaSistema();
                    break;
                case 'n':
                    cargarDatosPrueba();
                    break;
                case 'z':
                    salir = true;
                    break;
                default:
                    cout << "\nOpcion no valida. Intentelo nuevamente.\n";
                    break;
            }
        } catch (std::invalid_argument& e) {
            cout << "\nERROR: " << e.what() << endl;
        }
    }

    return 0;
}

void Pausa() {
    cin.ignore();
    std::cout << "Precione una tecla para continuar...";
    cin.ignore();
}

void Borrar() {
    system("clear");
    //    system("cls");
}

void menu() {
    cout << "\t\t --------------\n";
    cout << "\t\t --TIPCinemas--\n";
    cout << "\t\t --------------\n\n";
    cout << "\ta- Iniciar Sesión\n"; //vanessa
    cout << "\tb- Crear Reserva\n";
    cout << "\tc- Alta Cine\n"; //vanessa
    cout << "\td- Alta Función\n";
    cout<<"\te- Puntuar Película\n";                        //eve
    cout<<"\tf- Comentar Película\n";                       //joaquin
    cout<<"\tg- Ver Información de Película\n";             //eve
    cout<<"\th- Ver Comentarios y Puntaje de Película\n";   //danilo
    cout<<"\ti- Eliminar Película\n";
    cout<<"\tj- Ver reserva\n";                            //joaquin
    cout<<"\tk- Cerrar sesion\n";
    cout<<"\tl- Modificar fecha del sistema\n";            //danilo
    cout<<"\tm- Consultar fecha del sistema\n";            //danilo
    cout<<"\tn- Cargar datos de prueba\n";
    cout<<"\tz- Salir\n\n";
    cout<<"Elija una opcion: ";
}

void actualizarFecha(){
    DtFecha* hoy;

    int dia, mes, anio, hora, min, seg;
    
    cout<<"\t-----------------------------"<<endl;
    cout<<"\t-------ACTUALIZAR FECHA------"<<endl;
    cout<<"\t-----------------------------"<<endl<<endl<<endl;
    cout<<"Ingrese dia: ";
    cin>>dia;
    fflush(stdin);
    cout<<"ingrese mes: ";
    cin>>mes;
    fflush(stdin);
    cout<<"Ingrese anio: ";
    cin>>anio;
    fflush(stdin);
    cout<<"Ingrese hora: ";
    cin>>hora;
    fflush(stdin);
    cout<<"Ingrese minutos: ";
    cin>>min;
    fflush(stdin);
    cout<<"Ingrese segundos: ";
    cin>>seg;
    fflush(stdin);
    
    if(!validarFecha(dia,mes,anio,hora,min,seg))
        throw std::invalid_argument("Fecha no valida.\n");
    
    hoy=new DtFecha(dia,mes,anio,hora,min,seg);
    Fabrica::getInstancia()->getInterfaceUsuario()->setHoraSistema(hoy);
    cout<<endl<<"Se cargaron los datos correctamente."<<endl<<endl;
}

void datosDePrueba(){
    Fabrica::cargarDatosPrueba();
    cout<<"Datos de Prueba cargados Exitosamente!!!"<<endl;
}

void verFecha(){
    DtFecha* fecha;
    fecha=Fabrica::getInstancia()->getInterfaceUsuario()->getHoraSistema();
    
    cout<<"\t-----------------------------"<<endl;
    cout<<"\t-------FECHA del SISTEMA-----"<<endl;
    cout<<"\t-----------------------------"<<endl<<endl<<endl;
    cout<<*fecha;
};

bool validarFecha(int dia, int mes, int anio, int hora, int minutos, int segundos){
        if(anio>0 && hora > 0 && hora <= 24 && minutos > 0 && minutos <= 60 && segundos > 0 && segundos <= 60){
            switch (mes){
                case 1:
                case 3:
                case 5:
                case 7:
                case 8:
                case 10:
                case 12:
                    if(dia >= 1 && dia <= 31)
                        return true;
                    else
                        return false;
                    break;
                case 4:
                case 6:
                case 9:
                case 11:
                    if(dia >= 1 && dia <= 30)
                        return true;
                    else
                        return false;
                case 2:{
                    if(anio%4 == 0 && anio%100 != 0 || anio%400 == 0)
                        if(dia >= 1 && dia <= 29)
                            return true;
                        else
                            return false;
                    else
                        if(dia >= 1 && dia <= 28)
                            return true;
                        else
                            return false;
                }
                default: 
                    return false;
            }
    }
        else
            return false;
}

void iniciarSesion(){
    string nickname, psw;
    char seguir = 's';
    bool existe = false;
    
    cout<<"Nickname: ";
    cin>>nickname;
    controladorUsuario->ingresar(nickname);
    
    while(seguir == 's' && existe == false){
        cout<<"Contrasenia: ";
        cin>>psw;
        existe = controladorUsuario->ingresarContrasenia(psw);
        if (existe){
            controladorUsuario->iniciarSesion();
            cout<<"Bienvenido/a "<<nickname<<endl;
            seguir = 'n';
        }
        else{
            cout<<"La contraseña ingresada no es correcta"<<endl<<"ingresar otra contraseña? (s/n): ";
            cin>>seguir;
        }
    }
}

void crearReserva(){
    cout<<"Se trabaja en esta funcion.\n\n";
}

void altaCine(){
    cout<<"Se trabaja en esta funcion.\n\n";
}

void altaFuncion(){
    cout<<"Se trabaja en esta funcion.\n\n";
}

void puntuarPelicula(){
    string titulo, modificar;
    int nuevo, puntaje;
    DtPelicula** listaPeliculas= controladorPelicula->listarPeliculas();
    cout<<"Peliculas"<<endl<<endl;
    int i=0;
    while(listaPeliculas){
        cout<<"Titulo: "<<listaPeliculas[i]->getTitulo();
        i++;
    }
    cout<<"Seleccione una pelicula"<<endl;
    cin>>titulo;   //buscar
    controladorPelicula->seleccionarPeliculas(titulo);
    bool tienep=controladorPelicula->tienePuntaje();
    if(tienep){
        controladorPelicula->mostrarPuntaje();
        cout<<"Desea modificar puntaje(si, no): ";
        cin>>modificar;
        if(modificar.compare("si")==0){
            cout<<"Ingrese nuevo puntaje: ";
            cin>>nuevo;
            controladorPelicula->ingresarPuntaje(nuevo);}
    }else{
        cout<<"Ingrese un puntaje: ";
        cin>>puntaje;
        controladorPelicula->ingresarNuevoPuntaje(puntaje);
    }
    
}

void comentarPelicula(){
    cout<<"Se trabaja en esta funcion.\n\n";
}

void verInformacionPelicula(){
    cout<<"Se trabaja en esta funcion.\n\n";
}

void verComentariosPuntajePelicula(){
    cout<<"Se trabaja en esta funcion.\n\n";
}

void eliminarPelicula(){
    cout<<"Se trabaja en esta funcion.\n\n";
}

void verReserva(){
    cout<<"Se trabaja en esta funcion.\n\n";
}

void cerrarSesion(){
    cout<<"Se trabaja en esta funcion.\n\n";
}

void modificarFechaSistema(){
    cout<<"Se trabaja en esta funcion.\n\n";
}

void consultarFechaSistema(){
    cout<<"Se trabaja en esta funcion.\n\n";
}

void cargarDatosPrueba(){
    cout<<"Se trabaja en esta funcion.\n\n";
}