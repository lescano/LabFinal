#include "DtCine.h"

DtCine* DtCine::instancia = NULL;

DtCine::DtCine() {
	//seteo de atributos
}

DtCine* DtCine::getInstancia() {
    if (instancia == NULL)
        instancia = new DtCine();
    return instancia;
}