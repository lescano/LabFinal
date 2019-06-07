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
#include "usuPeli.h"
#include "Usuario.h"

void menu();
void pausa();

using namespace std;

int main(int argc, char** argv) {
    int op;
    menu();
    cin>>op;
    fflush(stdin);

    return 0;
}

void pausa(){
    std::cout << "Precione una tecla para continuar...";
    std::cin.ignore( std::numeric_limits<std::streamsize>::max(), '\n' );
}

void menu(){
    cout<<"\t\t -TIPCinemas-\n\n";
    cout<<"\t1- Iniciar Sesión\n";
    cout<<"\t2- Crear Reserva\n";
    cout<<"\t3- Alta Cine\n";
    cout<<"\t4- Alta Función\n";
    cout<<"\t5- Puntuar Película\n";
    cout<<"\t6- Comentar Película\n";
    cout<<"\t7- Ver Información de Película\n";
    cout<<"\t8- Ver Comentarios y Puntaje de Película\n";
    cout<<"\t9- Eliminar Película\n";
    cout<<"\t10- Ver reserva\n";
    cout<<"\t11- Cerrar sesion\n";
    cout<<"\t12- Modificar fecha del sistema\n";
    cout<<"\t13- Consultar fecha del sistema\n";
    cout<<"\t14- Cargar datos de prueba\n\n";
    cout<<"Elija una opcion: ";
}