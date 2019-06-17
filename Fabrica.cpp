
#include "Fabrica.h"
#include "KeyString.h"
#include "KeyInteger.h"

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

void Fabrica::cargarDatosPrueba(){
    
    Usuario* u1 = new Usuario("chachoElNumberOne","jorgeP4","/users/registered/chachoElNumberOne.png",usuario);
    Fabrica::getInstancia()->getInterfaceUsuario()->getUsuarios()->add(u1, new KeyString("chachoElNumberOne"));
    Usuario* u2 = new Usuario("carmeBeiro2010","carmela5688","/users/registered/carmeBeiro2010.png",usuario);
    Fabrica::getInstancia()->getInterfaceUsuario()->getUsuarios()->add(u2, new KeyString("carmeBeiro2010"));
    Usuario* u3 = new Usuario("ale_ulises","P4eslomejor21","/admin/registered/ale_ulises.png",administrador);
    Fabrica::getInstancia()->getInterfaceUsuario()->getUsuarios()->add(u3, new KeyString("ale_ulises"));
    
    Pelicula* p1 = new Pelicula("The Vindicators 3","Tercera entrega de la saga de superheroes.","/home/accion/posters/vindicators.png");
    Fabrica::getInstancia()->getInterfacePelicula()->getColeccionPeliculas()->add(p1);
    Pelicula* p2 = new Pelicula("Sangre de campeones","Documental.","/home/accion/posters/scampeones.png");
    Fabrica::getInstancia()->getInterfacePelicula()->getColeccionPeliculas()->add(p2);
    Pelicula* p3 = new Pelicula("El insulto","Drama libanes.","/home/accion/posters/elinsulto.png");
    Fabrica::getInstancia()->getInterfacePelicula()->getColeccionPeliculas()->add(p3);
    Pelicula* p4 = new Pelicula("La noche que no se repite","Tremenda pelicula uruguaya.","/home/accion/posters/nr.png");
    Fabrica::getInstancia()->getInterfacePelicula()->getColeccionPeliculas()->add(p4);
    
    Cine* c1 = new Cine("21 de setiembre 6658",300);
    Cine* c2 = new Cine("Miguel Barreiro 4588",250);
    
    
    Sala* s11 = new Sala(20);
    Sala* s12 = new Sala(60);
    Sala* s13 = new Sala(30);
    Sala* s21 = new Sala(200);
    Sala* s22 = new Sala(60);

    Funcion* f1 = new Funcion(new DtFecha(15,06,2018,14,00,00),2,p1);
    s11->setFunciones(f1);
    Funcion* f2 = new Funcion(new DtFecha(15,06,2018,16,30,00),2,p2);
    s11->setFunciones(f2);
    Funcion* f3 = new Funcion(new DtFecha(15,06,2018,14,00,00),2,p1);
    s21->setFunciones(f3);
    Funcion* f4 = new Funcion(new DtFecha(15,06,2018,22,00,00),2,p3);
    s13->setFunciones(f4);
    
    c1->setSala(s11);
    c1->setSala(s12);
    c1->setSala(s13);
    c2->setSala(s21);
    c2->setSala(s22);
    
    Fabrica::getInstancia()->getInterfaceCine()->getColeccionCines()->add(c1,new KeyInteger(c1->getNro_cine()));
    Fabrica::getInstancia()->getInterfaceCine()->getColeccionCines()->add(c2,new KeyInteger(c2->getNro_cine()));
    
    Pago* f11 = new Credito("Oca",15);
    Fabrica::getInstancia()->getInterfaceUsuario()->getPagos()->add(f11);
    Pago* f12 = new Credito("Creditel",20);
    Fabrica::getInstancia()->getInterfaceUsuario()->getPagos()->add(f12);
    
    Opinion* o1 = new Opinion(u1,"Es tremenda pelicula. La mejor parte es cuando aparecen Rick y Morty");
    p1->setOpinion(o1);
    Opinion* o2 = new Opinion(u2,"Esta muy buena pero la mejor parte es cuando explota el planeta con los malos");
    o2->setColComentario(o1);
    Opinion* o3 = new Opinion(u1,"Callateee no cuentes el final!!");
    o3->setColComentario(o2);
    
    Puntaje* pu1= new Puntaje(p1, 9);
    u1->setPuntaje(pu1);
    Puntaje* pu2= new Puntaje(p3, 6);
    u2->setPuntaje(pu2);
    
    Reserva* r1 = new Reserva(f1,"BROU",7);
    u1->setReserva(r1);
    Reserva* r2 = new Reserva(f1,"OCA",8);
    u2->setReserva(r2);
    
}