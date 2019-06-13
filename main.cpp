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

void menu();
void Pausa();
void Borrar();
void datosDePrueba();
void actualizarFecha();
void verFecha();
bool validarFecha(int,int,int,int,int,int);

using namespace std;

int main(int argc, char** argv) {
    int op;
    bool salir=false;
    
    actualizarFecha();
    
    while(!salir){
        Pausa();
        Borrar();
        menu();
        cin>>op;
        fflush(stdin);
        
        Borrar();
        try{
            switch (op){
                case 1:
                    break;
                case 2:
                    break;
                case 3:
                    break;
                case 4:
                    break;
                case 5:
                    break;
                case 6:
                    break;
                case 7:
                    break;
                case 8:
                    break;            
                case 9:
                    break;
                case 10:
                    break;
                case 11:
                    break;
                case 12:
                    actualizarFecha();
                    break;
                case 13:
                    verFecha();
                    break;
                case 14:
                        datosDePrueba();
                    break;
                case 0:
                    salir=true;
                    break;
                default:
                    cout<<"\nOpcion no valida. Intentelo nuevamente.\n";
                    break;
            }
        }catch (std::invalid_argument& e) {
            cout << "\nERROR: " << e.what() << endl;
        }
    }
    
    return 0;
}

void Pausa(){
    cin.ignore();
    std::cout<<"Precione una tecla para continuar...";
    cin.ignore();
}

void Borrar(){
    system("clear");
//    system("cls");
  }

void menu(){
    cout<<"\t\t --------------\n";
    cout<<"\t\t --TIPCinemas--\n";
    cout<<"\t\t --------------\n\n";
    cout<<"\t1- Iniciar Sesión\n";                          //vanessa
    cout<<"\t2- Crear Reserva\n";
    cout<<"\t3- Alta Cine\n";                               //vanessa
    cout<<"\t4- Alta Función\n";
    cout<<"\t5- Puntuar Película\n";                        //eve
    cout<<"\t6- Comentar Película\n";                       //joaquin
    cout<<"\t7- Ver Información de Película\n";             //eve
    cout<<"\t8- Ver Comentarios y Puntaje de Película\n";   //danilo
    cout<<"\t9- Eliminar Película\n";
    cout<<"\t10- Ver reserva\n";                            //joaquin
    cout<<"\t11- Cerrar sesion\n";
    cout<<"\t12- Modificar fecha del sistema\n";            //danilo
    cout<<"\t13- Consultar fecha del sistema\n";            //danilo
    cout<<"\t14- Cargar datos de prueba\n";
    cout<<"\t0- Salir\n\n";
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