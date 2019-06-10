
#include "Fabrica.h"

Fabrica* Fabrica::instancia = NULL;

Fabrica::Fabrica() {
}

Fabrica* Fabrica::getInstancia() {
    if (instancia == NULL)
        instancia = new Fabrica();
    return instancia;
}

ICCines* Fabrica::getInterfaceCine() {
    return ControladorCine::getInstancia();
}

ICFuncion* Fabrica::getInterfaceFuncion() {
    return ControladorFuncion::getInstancia();
}

ICPelicula* Fabrica::getInterfacePelicula() {
    return ControladorPelicula::getInstancia();
}

ICUsuario* Fabrica::getInterfaceUsuario() {
    return ControladorUsuario::getInstancia();
}
