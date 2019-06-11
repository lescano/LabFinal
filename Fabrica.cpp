
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

void Fabrica::cargarDatosPrueba(){
    
    Usuario* u1 = new Usuario("chachoElNumberOne","jorgeP4","/users/registered/chachoElNumberOne.png",usuario);
    Usuario* u2 = new Usuario("carmeBeiro2010","carmela5688","/users/registered/carmeBeiro2010.png",usuario);
    Usuario* u3 = new Usuario("ale_ulises","P4eslomejor21","/admin/registered/ale_ulises.png",administrador);
    
    Pelicula* p1 = new Pelicula("The Vindicators 3","Tercera entrega de la saga de superheroes.","/home/accion/posters/vindicators.png");
    Pelicula* p2 = new Pelicula("Sangre de campeones","Documental.","/home/accion/posters/scampeones.png");
    Pelicula* p3 = new Pelicula("El insulto","Drama libanes.","/home/accion/posters/elinsulto.png");
    Pelicula* p4 = new Pelicula("La noche que no se repite","Tremenda pelicula uruguaya.","/home/accion/posters/nr.png");
    
    Cine* c1 = new Cine("21 de setiembre 6658",300);
    Cine* c2 = new Cine("Miguel Barreiro 4588",250);
    
    Sala* s11 = new Sala(20,c1);
    Sala* s12 = new Sala(60,c1);
    Sala* s13 = new Sala(30,c1);
    Sala* s21 = new Sala(200,c2);
    Sala* s22 = new Sala(60,c2);
   
    Funcion* f1 = new Funcion(new DtFecha(15,06,2018,14,00,00),2,p1,s11);
    Funcion* f2 = new Funcion(new DtFecha(15,06,2018,16,30,00),2,p2,s11);
    Funcion* f3 = new Funcion(new DtFecha(15,06,2018,14,00,00),2,p1,s21);
    Funcion* f4 = new Funcion(new DtFecha(15,06,2018,22,00,00),2,p3,s13);
    
    Pago* f11 = new Credito("Oca",15);
    Pago* f12 = new Credito("Creditel",20);
    
    Opinion* o1 = new Opinion(u1,p1,"Es tremenda pelicula. La mejor parte es cuando aparecen Rick y Morty");
    Opinion* o2 = new Opinion(u2,o1,"Esta muy buena pero la mejor parte es cuando explota el planeta con los malos");
    Opinion* o3 = new Opinion(u1,o2,"Callateee no cuentes el final!!");
    
    
    Puntaje* pu1= new Puntaje(u1, p1, 9);
    Puntaje* pu2= new Puntaje(u2, p3, 6);
    
    Reserva* r1 = new Reserva(u1,f1,"BROU",7);
    Reserva* r2 = new Reserva(u2,f1,"OCA",8);
}