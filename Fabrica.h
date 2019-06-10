#ifndef FABRICA_H
#define FABRICA_H

#include "ICCines.h"
#include "ControladorCine.h"
#include "ICFuncion.h"
#include "ControladorFunciones.h"
#include "ICPelicula.h"
#include "ControladorPelicula.h"
#include "ICUsuario.h"
#include "ControladorUsuario.h"

#include <string.h>

class Fabrica{
private:
    Fabrica();
    static Fabrica* instancia;
public:
    static Fabrica* getInstancia();
    ICCines* getInterfaceCine();
    ICFuncion* getInterfaceFuncion();
    ICPelicula* getInterfacePelicula();
    ICUsuario* getInterfaceUsuario();
};

#endif /* FABRICA_H */