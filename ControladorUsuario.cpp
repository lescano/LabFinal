
#include "ControladorUsuario.h"

ControladorUsuario* ControladorUsuario::instancia = NULL;

ControladorUsuario::ControladorUsuario() {
	//seteo de atributos
}

ControladorUsuario* ControladorUsuario::getInstancia() {
    if (instancia == NULL)
        instancia = new ControladorUsuario();
    return instancia;
}
void ControladorUsuario::ingresar(string){
}
bool ControladorUsuario::ingresarContrasenia(string){
    
}
void ControladorUsuario::iniciarSesion(){
    
}