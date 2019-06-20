
#include "ControladorFunciones.h"
#include "Lista.h"

ControladorFuncion* ControladorFuncion::instancia = NULL;

ControladorFuncion::ControladorFuncion() {
	//seteo de atributos
}

ControladorFuncion* ControladorFuncion::getInstancia() {
    if (instancia == NULL)
        instancia = new ControladorFuncion();
    return instancia;
}

Cine* ControladorFuncion::seleccionarCine(int){
    
}
Pelicula* ControladorFuncion::seleccionarPelicula(string){
    
}
string** ControladorFuncion::listarPeliculas(){
    
}
DtInfoPeli* ControladorFuncion::VerInfoPeli(){
    
}
DtCine* ControladorFuncion::listarCine(){
    
}
ICollection* ControladorFuncion::listarFunciones(){
//    ICollection* dtFun=new Lista();
//    this->peliculaRecordada->listarFunciones(this->cineRecordado);
}
Funcion* ControladorFuncion::seleccionarFunciones(int){
    
}
void ControladorFuncion::cantAsientos(int){
    
}
float ControladorFuncion::reservaCredito(int){
    
}
void ControladorFuncion::reservaDebito(string){
    
}
int ControladorFuncion::precioTotal(){
    
}
void ControladorFuncion::crearReserva(){
    
}
