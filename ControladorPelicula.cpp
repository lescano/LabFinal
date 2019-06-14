#include "ControladorPelicula.h"
#include "Usuario.h"

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
void ControladorPelicula::ingresarNuevoPuntaje(int){
    
}
void ControladorPelicula::ingresarPuntaje(int){
    
}
DtCine** ControladorPelicula::listarCines(){
    
}
DtComentario** ControladorPelicula::listarComentarios(){
    
}
ICollection* ControladorPelicula::listarFunciones(DtFecha*){
    
    
    
}
DtPelicula** ControladorPelicula::listarPeliculas(){
    IIterator* itPeliculas = this->coleccionPeliculas->getIteratorObj();
    DtPelicula** listaPeliculas;
    while(itPeliculas->hasNext()){
        Pelicula* p = (Pelicula*)itPeliculas->getCurrent();
        for (int i=0; i < 3; i++){
            DtPelicula* titulo = new DtPelicula(p->getTitulo());
            listaPeliculas[i] = titulo;
        }
        itPeliculas->next();
    }
    return listaPeliculas;
    
}
int ControladorPelicula::mostrarPuntaje(){
    
}
Cine* ControladorPelicula::seleccionarCines(int){
    
}
Opinion* ControladorPelicula::seleccionarComentarios(string){
    
}
void ControladorPelicula::seleccionarPeliculas(string titulo){
    IIterator* it = this->coleccionPeliculas->getIteratorObj();
    bool es;
     while(it->hasNext()){
        Pelicula* p = (Pelicula*)it->getCurrent();
        es=p->seleccionarPelicula(titulo);
        if(es){
            this->peliculaRecordada=p;
        }
    }
    
}

Pelicula* ControladorPelicula::getPeliculaRecordada(){
    return this->peliculaRecordada;
}
bool ControladorPelicula::tienePuntaje(){
    return this->usuarioRecordada->tienePuntaje();
}
DtInfoPeli* ControladorPelicula::verInfoPeli(){
    
}





