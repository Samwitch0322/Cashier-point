#include"AccountAccess.hpp"

AccountAccess::AccountAccess() {}
AccountAccess::AccountAccess(Client cliente, string contrasenia){
    client = cliente;
    password = contrasenia;
}

void AccountAccess::setPassword(string contrasenia){
    password = contrasenia;
}
string AccountAccess::getPassword(){
    return password;
}

void AccountAccess::setClient(Client cliente){
    client = cliente;
}
Client AccountAccess::getClient(){
    return client;
}