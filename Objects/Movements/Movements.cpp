#include"Movements.hpp"

Movements::Movements() {}
Movements::Movements(string numeroCuenta, string fecha, Client cliente)
{
    accountNumber = numeroCuenta;
    date = fecha;
}

void Movements::setAccountNumber(string numeroCuenta){
    accountNumber = numeroCuenta;
}
string Movements::getAccountNumber(){
    return accountNumber;
}
void Movements::setDate(string fecha){
    date = fecha;
}
string Movements::getDate(){
    return date;
}; 