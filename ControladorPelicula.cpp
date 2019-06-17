#include "ControladorPelicula.h"
#include "Usuario.h"
#include "ListaDicc.h"
#include "Lista.h"
#include "Fabrica.h"

ControladorPelicula* ControladorPelicula::instancia = NULL;

ControladorPelicula::ControladorPelicula() {
    this->coleccionPeliculas = new Lista();
    usuarioRecordada=NULL;
    peliculaRecordada=NULL;
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
void ControladorPelicula::ingresarNuevoPuntaje(int puntaje){
    this->getUsuarioRecordado()->ingresarNuevoPuentaje(puntaje,peliculaRecordada);
}
void ControladorPelicula::ingresarPuntaje(int){
    
}
DtCine** ControladorPelicula::listarCines(){
    
}
DtComentario** ControladorPelicula::listarComentarios(){
    
}
ICollectible* ControladorPelicula::listarFunciones(DtFecha*){
}

string** ControladorPelicula::listarPeliculas() {
    usuarioRecordada = getUsuarioRecordado();
    if(usuarioRecordada){
        if (usuarioRecordada->getTipoUsuario() != 1)
            throw std::invalid_argument("No tiene los privilegios necesarios para puntuar peliculas.\n");
        else {
            IIterator* itPeliculas = this->coleccionPeliculas->iterator();
            string** listaPelicula = new string* [MAX_PELICULAS];
            string* titulo;

            int i = 0;
            while (itPeliculas->hasNext()) {
                Pelicula* p = (Pelicula*) itPeliculas->getCurrent();
                titulo = new string(p->getTitulo());
                listaPelicula [i] = titulo;
                itPeliculas->next();
                i++;
            }
            if (i == 0)
                throw std::invalid_argument("No hay peliculas en el sistema\n");

            listaPelicula [i] = NULL;
            return listaPelicula;
        }
    }else
        throw std::invalid_argument("No tiene los privilegios necesarios para puntuar peliculas.\n");
}

int ControladorPelicula::mostrarPuntaje(){
    
}
Cine* ControladorPelicula::seleccionarCines(int){
    
}
Opinion* ControladorPelicula::seleccionarComentarios(string){
    
}
void ControladorPelicula::seleccionarPeliculas(string titulo){
    IIterator* it = this->coleccionPeliculas->iterator();
    bool es;
     while(it->hasNext()){
        Pelicula* p = (Pelicula*)it->getCurrent();
        es=p->seleccionarPelicula(titulo);
        if(es){
            this->peliculaRecordada=p;
        }
        it->next();
    }
    if(!peliculaRecordada)
        throw std::invalid_argument("La pelicula seleccionada no esta en nuestra cartelera.\n");
}

Pelicula* ControladorPelicula::getPeliculaRecordada(){
    return this->peliculaRecordada;
}
bool ControladorPelicula::tienePuntaje(){
    return this->getUsuarioRecordado()->tienePuntaje(peliculaRecordada->getTitulo());
}
DtInfoPeli* ControladorPelicula::verInfoPeli(){
    
}

ICollection* ControladorPelicula::getColeccionPeliculas(){
    return this->coleccionPeliculas;
}

Usuario* ControladorPelicula::getUsuarioRecordado(){
    Fabrica::getInstancia()->getInterfaceUsuario()->getUsuarioRecordado();
}
