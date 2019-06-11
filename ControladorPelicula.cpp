
#include "ControladorPelicula.h"

ControladorPelicula* ControladorPelicula::instancia = NULL;

ControladorPelicula::ControladorPelicula() {
	//seteo de atributos
}

ControladorPelicula* ControladorPelicula::getInstancia() {
    if (instancia == NULL)
        instancia = new ControladorPelicula();
    return instancia;
}

void ControladorPelicula::borrarPelicula(){
    
}
void ControladorPelicula::crearComentarios(string){
    
}
void ControladorPelicula::crearRespuesta(string){
    
}
void ControladorPelicula::ingresarNuevoPuntaje(){
    
}
void ControladorPelicula::ingresarPuntaje(){
    
}
DtCine ControladorPelicula::listarCines(){
    
}
DtComentario** ControladorPelicula::listarComentarios(){
    
}
ICollection* ControladorPelicula::listarFunciones(Cine*){
    
}
string** ControladorPelicula::listarPeliculas(){
    
}
int ControladorPelicula::mostrarPuntaje(){
    
}
Cine* ControladorPelicula::seleccionarCines(int){
    
}
Opinion* ControladorPelicula::seleccionarComentarios(string){
    
}
Pelicula* ControladorPelicula::seleccionarPeliculas(string){
    
}
bool ControladorPelicula::tienePuntaje(){
    
}
DtInfoPeli* ControladorPelicula::verInfoPeli(){
    
}







