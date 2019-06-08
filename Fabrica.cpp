
#include "Fabrica.h"

Fabrica* Fabrica::instancia = NULL;

ControladorCine* Fabrica::controladorCine() {
    return ControladorCine::getInstancia();
}

Fabrica::Fabrica() {
}

Fabrica* Fabrica::getInstancia() {
    if (instancia == NULL)
        instancia = new Fabrica();
    return instancia;
}
