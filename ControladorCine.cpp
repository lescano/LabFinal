
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