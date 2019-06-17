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

void verYseleccionarPelicula();

Fabrica* f = f->getInstancia();
ICUsuario* controladorUsuario = f->getInterfaceUsuario();
ICPelicula* controladorPelicula = f->getInterfacePelicula();

using namespace std;

int main(int argc, char** argv) {
    char op;
    bool salir=false;
    
  //  modificarFechaSistema();
    
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
    //system("cls");
}

void menu() {
    cout <<"\t\t --------------\n";
    cout <<"\t\t --TIPCinemas--\n";
    cout <<"\t\t --------------\n\n";
    cout <<"\ta- Iniciar Sesión\n"; //vanessa
    cout <<"\tb- Crear Reserva\n";
    cout <<"\tc- Alta Cine\n"; //vanessa
    cout <<"\td- Alta Función\n";
    cout<<"\te- Puntuar Película\n";                        //eve
    cout<<"\tf- Comentar Película\n";                       //joaquin
    cout<<"\tg- Ver Información de Película\n";             //eve
    cout<<"\th- Ver Comentarios y Puntaje de Película\n";   //danilo
    cout<<"\ti- Eliminar Película\n";
    cout<<"\tj- Ver reserva\n";                            //joaquin
    cout<<"\tk- Cerrar sesion\n";                           //danilo
    cout<<"\tl- Modificar fecha del sistema\n";            //danilo
    cout<<"\tm- Consultar fecha del sistema\n";            //danilo
    cout<<"\tn- Cargar datos de prueba\n";                  //TODOS
    cout<<"\tz- Salir\n\n";
    cout<<"Elija una opcion: ";
}

void modificarFechaSistema(){
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
    
    hoy=new DtFecha(dia,mes,anio,hora,min,seg);
    Fabrica::getInstancia()->getInterfaceUsuario()->setHoraSistema(hoy);
    cout<<endl<<"Se cargaron los datos correctamente."<<endl<<endl;
}

void consultarFechaSistema(){
    DtFecha* fecha;
    fecha=Fabrica::getInstancia()->getInterfaceUsuario()->getHoraSistema();
    
    cout<<"\t-----------------------------"<<endl;
    cout<<"\t-------FECHA del SISTEMA-----"<<endl;
    cout<<"\t-----------------------------"<<endl<<endl<<endl;
    cout<<*fecha;
}

void iniciarSesion(){
    string nickname, psw;
    char seguir = 's';
    bool existe = false;
    
    cout<<"\t-----------------------------"<<endl;
    cout<<"\t--------INICIAR SESION-------"<<endl;
    cout<<"\t-----------------------------"<<endl<<endl<<endl;
    
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
    cout<<"\t-----------------------------"<<endl;
    cout<<"\t-------PUNTUAR PELICULA------"<<endl;
    cout<<"\t-----------------------------"<<endl<<endl<<endl;
    string titulo, modificar;
    int nuevo, puntaje;
    
    verYseleccionarPelicula();
    cin.ignore();
    std::getline(std::cin, titulo);
    controladorPelicula->seleccionarPeliculas(titulo);
    if(controladorPelicula->tienePuntaje()){
        controladorPelicula->mostrarPuntaje();
        cout<<"Desea modificar puntaje(si, no): ";
        cin>>modificar;
        if(modificar.compare("si")==0){
            cout<<"Ingrese nuevo puntaje: ";
            cin>>nuevo;
            controladorPelicula->ingresarPuntaje(nuevo);
            cout<<"\nPelicula puntuada.\n";
        }
    }else{
        cout<<"Ingrese un puntaje: ";
        cin>>puntaje;
        controladorPelicula->ingresarNuevoPuntaje(puntaje);
        cout<<"\nPelicula puntuada.\n";
    }
    cout<<"Gracias por usuar TIPCinemas !!!\n";
}

void comentarPelicula(){
    cout<<"Se trabaja en esta funcion.\n\n";
}

void verInformacionPelicula(){
    cout<<"Se trabaja en esta funcion.\n\n";
}

void verComentariosPuntajePelicula(){
    cout<<"\t------------------------------"<<endl;
    cout<<"\t--VER COMENTARIOS Y PUNTAJES--"<<endl;
    cout<<"\t------------------------------"<<endl<<endl<<endl;
    string titulo;
    verYseleccionarPelicula();
    std::getline(std::cin, titulo);
    controladorPelicula->seleccionarPeliculas(titulo);
//    controladorPelicula->listarComentarios();
//    controladorPelicula->mostrarPuntaje();
}

void eliminarPelicula(){
    cout<<"Se trabaja en esta funcion.\n\n";
}

void verReserva(){
    cout<<"Se trabaja en esta funcion.\n\n";
}

void cerrarSesion(){
    cout<<"\t-----------------------------"<<endl;
    cout<<"\t---------CERRAR SESION-------"<<endl;
    cout<<"\t-----------------------------"<<endl<<endl<<endl;
    controladorUsuario->cerrarSesion();
    cout<<"Sesion cerrada exitosamente.\n";
}


void cargarDatosPrueba(){
    cout<<"\t-----------------------------"<<endl;
    cout<<"\t----CARGAR DATOS DE PRUEBA---"<<endl;
    cout<<"\t-----------------------------"<<endl<<endl<<endl;
    Fabrica::cargarDatosPrueba();
    cout<<"Datos de Prueba cargados Exitosamente!!!"<<endl;
}

void verYseleccionarPelicula() {
    int i = 0;
    string** listaPeliculas = controladorPelicula->listarPeliculas();

    cout << "Peliculas" << endl << endl;
    while (listaPeliculas[i]) {
        cout << "\tTitulo: " << listaPeliculas[i]->data() << "\n";
        i++;
    }
    cout << "\nSeleccione una pelicula: "
}