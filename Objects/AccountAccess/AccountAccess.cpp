#include"AccountAccess.hpp"

AccountAccess::AccountAccess() {}
AccountAccess::AccountAccess(Client cliente, string contrasenia)
{
    password = contrasenia;
}

void AccountAccess::setPassword(string contrasenia){
    password = contrasenia;
}
string AccountAccess::getPassword(){
    return password;
}