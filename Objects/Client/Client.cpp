#include "Client.hpp"

Cliente::Cliente() {}

Cliente::Cliente(string name, string varRFC,string addresses)
{
    nombre = name;
    RFC = varRFC;
    domicilio = addresses;
}

void Cliente::setNombre(string name){
    nombre = name;
}
string Cliente::getNombre(){
    return nombre;
}
  void Cliente::setRFC(string varRFC){
    RFC = varRFC;
}
string Cliente::getRFC(){
    return RFC;
}
  void Cliente::setDomicilio(string addresses){
    domicilio = addresses;
}
string Cliente::getDomicilio(){
    return domicilio;
}

