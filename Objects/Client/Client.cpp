#include "Client.hpp"

Client::Client() {}

Client::Client(string name, string varRFC,string addresses)
{
    nombre = name;
    RFC = varRFC;
    domicilio = addresses;
}

void Client::setNombre(string name){
    nombre = name;
}
string Client::getNombre(){
    return nombre;
}
  void Client::setRFC(string varRFC){
    RFC = varRFC;
}
string Client::getRFC(){
    return RFC;
}
  void Client::setDomicilio(string addresses){
    domicilio = addresses;
}
string Client::getDomicilio(){
    return domicilio;
}

