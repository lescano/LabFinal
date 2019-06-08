
#include "ControladorFunciones.h"

ControladorFuncion* ControladorFuncion::instancia = NULL;

ControladorFuncion::ControladorFuncion() {
	//seteo de atributos
}

ControladorFuncion* ControladorFuncion::getInstancia() {
    if (instancia == NULL)
        instancia = new ControladorFuncion();
    return instancia;
}