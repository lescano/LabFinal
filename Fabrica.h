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
#include "IDictionary.h"

#include <string.h>

class Fabrica{
private:
    Fabrica();
    static Fabrica* instancia;

//    static ICCines* instanciaCine;
//    static ICFuncion* instanciaFuncion;
//    static ICPelicula* instanciaPelicula;
//    static ICUsuario* instanciaUsuario;
    
public:
    static Fabrica* getInstancia();
    ICCines* getInterfaceCine();
    ICFuncion* getInterfaceFuncion();
    ICPelicula* getInterfacePelicula();
    ICUsuario* getInterfaceUsuario();
    
    static void cargarDatosPrueba();
    
//    static ICCines* getInterfaceCine();
//    static ICFuncion* getInterfaceFuncion();
//    static ICPelicula* getInterfacePelicula();
//    static ICUsuario* getInterfaceUsuario();
};

#endif /* FABRICA_H */