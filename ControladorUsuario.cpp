#include "ControladorUsuario.h"
#include "Fabrica.h"
#include "KeyString.h"
#include "Lista.h"

ControladorUsuario* ControladorUsuario::instancia = NULL;

ControladorUsuario::ControladorUsuario() {
    //Se crea la lista donde se van a guardar los usuarios del sistema
//    IDictionary* usuariosSistema = new ListDicc();
    
    this->horaSistema = NULL;
    this->nickname = "";
    this->usuarioRecordado = NULL;
//    this->usuarios = usuariosSistema;
    this->usuarios = new ListDicc();
    this->pagos=new Lista();
    this->usuarios=new ListDicc();

//    //Se crean unos usuarios que estan registrados en el sistema. 
//    Usuario* u1 = new Usuario("vanessa", "/home/imagen/img1", "1234", usuario);
//
//    //Se crean las claves de cada usuario. los usuarios se identifican por el nick
//    KeyString* clave1 = new KeyString("vanessa");
//    
//    //Esos usuarios creados se guardan en la coleccion de usuariosSistema
//    usuariosSistema->add(u1,clave1);
}

ControladorUsuario* ControladorUsuario::getInstancia() {
    if (instancia == NULL)
        instancia = new ControladorUsuario();
    return instancia;
}

DtFecha* ControladorUsuario::getHoraSistema(){
    return this->horaSistema;
}

void ControladorUsuario::setHoraSistema(DtFecha* hoy){
    this->horaSistema=hoy;
}

void ControladorUsuario::ingresar(string nickname){
    if (this->usuarioRecordado != NULL)
        throw std::invalid_argument("Sesion Ocupada");
    this->nickname = nickname;
}
bool ControladorUsuario::ingresarContrasenia(string psw){
    
    if (this->usuarioRecordado != NULL)
        throw std::invalid_argument("Sesion Ocupada");
    if (this->nickname.compare("")==0)
        throw std::invalid_argument("Debe ingresar nickname");
    
    KeyString* key1 = new KeyString(this->nickname);
    bool existe = false; //esa variable c es la que esta en el diagrama
    Usuario* u = (Usuario*)this->usuarios->find(key1);
    
    if(u){
        existe = u->esMiPWD(psw);
        if (existe)
            this->psw = psw;
        return existe;
    }
    else
        return existe;
    
}
void ControladorUsuario::iniciarSesion(){
    
    if (this->usuarioRecordado != NULL)
        throw std::invalid_argument("Sesion Ocupada");//corregir
    if (this->nickname.compare("")==0)
        throw std::invalid_argument("Debe ingresar nickname");
    if (this->psw.compare("")==0)
        throw std::invalid_argument("Debe ingresar contrasenia");
    
    KeyString* key1 = new KeyString(this->nickname);
    Usuario* u = (Usuario*)this->usuarios->find(key1);

    this->usuarioRecordado = u;//se recuerda el usuario que inicia sesion
    //se libera la memoria
    this->nickname = "";
    this->psw = "";
}

IDictionary* ControladorUsuario::getUsuarios(){
    return this->usuarios;
}

ICollection* ControladorUsuario::getPagos(){
    return this->pagos;
}

string ControladorUsuario::getNickname(){
    return this->nickname;
}

Usuario* ControladorUsuario::getUsuarioRecordado(){
    return this->usuarioRecordado;
}