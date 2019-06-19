#include "ControladorPelicula.h"
#include "Usuario.h"
#include "ListaDicc.h"
#include "Lista.h"
#include "Fabrica.h"

ControladorPelicula* ControladorPelicula::instancia = NULL;

ControladorPelicula::ControladorPelicula() {
    this->coleccionPeliculas = new Lista();
    this->usuarioRecordada=NULL;
    this->peliculaRecordada=NULL;
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
    this->getUsuarioRecordado()->ingresarNuevoPuentaje(puntaje,this->peliculaRecordada);
}
void ControladorPelicula::ingresarPuntaje(int puntaje){
    this->getUsuarioRecordado()->ingresarPuntaje(this->peliculaRecordada->getTitulo(),puntaje);
}
int** ControladorPelicula::listarCines(){
    return this->peliculaRecordada->listarCine();
}
DtComentarios** ControladorPelicula::listarComentarios(){
    
}
ICollectible* ControladorPelicula::listarFunciones(DtFecha*){
}

string** ControladorPelicula::listarPeliculas() {
    this->usuarioRecordada = getUsuarioRecordado();
    if(this->usuarioRecordada){
        if (this->usuarioRecordada->getTipoUsuario() != 1)
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
    
    ICUsuario* controladorUsuario = Fabrica::getInstancia()->getInterfaceUsuario();
    Usuario* u=controladorUsuario->getUsuarioRecordado();
    return u->mostrarPuntaje(this->peliculaRecordada->getTitulo());
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
    if(!this->peliculaRecordada)
        throw std::invalid_argument("La pelicula seleccionada no esta en nuestra cartelera.\n");
}

Pelicula* ControladorPelicula::getPeliculaRecordada(){
    return this->peliculaRecordada;
}
bool ControladorPelicula::tienePuntaje(){
    return this->getUsuarioRecordado()->tienePuntaje(this->peliculaRecordada->getTitulo());
}
DtInfoPeli* ControladorPelicula::verInfoPeli(){
    this->peliculaRecordada->verInfoPeli();
}

ICollection* ControladorPelicula::getColeccionPeliculas(){
    return this->coleccionPeliculas;
}

Usuario* ControladorPelicula::getUsuarioRecordado(){
    Fabrica::getInstancia()->getInterfaceUsuario()->getUsuarioRecordado();
}

DtCom_Puntaje* ControladorPelicula::verComentariosPuntaje() {
    ICollection* comentarios;
    ICollection* puntajes;
    int total = 0, cantPuntuaciones = 0;
    float promedio = 0;
    DtCom_Puntaje* dtCom_Puntaje = new DtCom_Puntaje();

    puntajes = Fabrica::getInstancia()->getInterfaceUsuario()->verPuntajes(this->peliculaRecordada->getTitulo());
    comentarios = this->peliculaRecordada->getComentarios();
    total = this->peliculaRecordada->getPuntajeTotal();

    IIterator * it = puntajes->iterator();
    while (it->hasNext()) {
        cantPuntuaciones++;
        it->next();
    }
    promedio = (float) total / cantPuntuaciones;
    
    dtCom_Puntaje->setCantPuntuaciones(cantPuntuaciones);
    dtCom_Puntaje->setPuntajePromedio(promedio);
    dtCom_Puntaje->setDtComentarios(comentarios);
    dtCom_Puntaje->setDtPuntaje(puntajes);
    
    return dtCom_Puntaje;
}
