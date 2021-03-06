
#include "ControladorCine.h"

#include <cstddef>

using namespace std;

ControladorCine* ControladorCine::instancia = NULL;

ControladorCine::ControladorCine() {
    this->coleccionCines=new ListDicc();
    this->controladorPelicula=NULL;
    this->controladorUsuario=NULL;
    this->cineRecordado=NULL;
    this->salaRecordada=NULL;
    this->funcionRecordada=NULL;
}

ControladorCine* ControladorCine::getInstancia() {
    if (instancia == NULL)
        instancia = new ControladorCine();
    return instancia;
}

void ControladorCine::setDireccion(string direccion){
    this->direccion=direccion;
    
}

void ControladorCine::setCapacidadSalas(int capacidad){
    this->capacidadSala=capacidad;
}

string** ControladorCine::listarCines(){
    
}

string** ControladorCine::listarPeliculas(){
    
}

Cine* ControladorCine::seleccionarCine(int){
    
}

Pelicula* ControladorCine::seleccionarPelicula(string pelicula){
    
}

void ControladorCine::altaSala(){
    
}

void ControladorCine::altaCine(){
    
}

ICollection* ControladorCine::listarSalas(){
    
}

Sala* ControladorCine::seleccionarSala(int idSala){
    
}

bool* ControladorCine::fechaFuncion(DtFecha* fecha){
    
}

void ControladorCine::altaFuncion(){
    
}

IDictionary* ControladorCine::getColeccionCines(){
    return this->coleccionCines;
}