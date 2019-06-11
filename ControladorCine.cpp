
#include "ControladorCine.h"

#include <cstddef>

using namespace std;

ControladorCine* ControladorCine::instancia = NULL;

ControladorCine::ControladorCine() {
	//seteo de atributos
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

ICollection* ControladorCine::listarCines(){
    
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