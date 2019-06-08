#ifndef FABRICA_H
#define FABRICA_H

#include "ICCines.h"
#include "ControladorCine.h"

#include <string.h>

class Fabrica{
private:
    Fabrica();
    static Fabrica* instancia;
public:
    static Fabrica* getInstancia();
    ControladorCine* controladorCine();
};

#endif /* FABRICA_H */