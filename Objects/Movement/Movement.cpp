#include"Movement.hpp"

Movement::Movement() {}
Movement::Movement(string numeroCuenta, string fecha, Client cliente)
{
    accountNumber = numeroCuenta;
    date = fecha;
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