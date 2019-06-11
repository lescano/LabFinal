
#include "ControladorUsuario.h"
#include "Fabrica.h"

ControladorUsuario* ControladorUsuario::instancia = NULL;

ControladorUsuario::ControladorUsuario() {
    this->usuarioRecordado=NULL;
    this->usuarios=NULL;
    this->horaSistema=NULL;
}

ControladorUsuario* ControladorUsuario::getInstancia() {
    if (instancia == NULL)
        instancia = new ControladorUsuario();
    return instancia;
}

DtFecha* ControladorUsuario::getHoraSistema(){
    return this->horaSistema;
}

void ControladorUsuario::setHoraSistema(DtFecha* hoy){
    this->horaSistema=hoy;
}

void ControladorUsuario::ingresar(string){
}
bool ControladorUsuario::ingresarContrasenia(string){
    
}
void ControladorUsuario::iniciarSesion(){
    
}
