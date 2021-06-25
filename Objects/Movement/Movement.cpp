#include"Movement.hpp"

Movement::Movement() {}
Movement::Movement(string numeroCuenta, string fecha, Client cliente, string movimiento, float cantidad)
{
    accountNumber = numeroCuenta;
    date = fecha;
    client = cliente;
    move = movimiento;
    cant = cantidad;
}

void Movement::setAccountNumber(string numeroCuenta){
    accountNumber = numeroCuenta;
}
string Movement::getAccountNumber(){
    return accountNumber;
}
void Movement::setDate(string fecha){
    date = fecha;
}
string Movement::getDate(){
    return date;
}; 

void Movement::setClient(Client cliente){
    client = cliente;
}
Client Movement::getClient(){
    return client;
}

void Movement::setMove(string movimiento){
    move = movimiento;
}
string Movement::getMove(){
    return move;
}

void Movement::setCant(float cantidad){
    cant = cantidad;
}
float Movement::getCant(){
    return cant;
}