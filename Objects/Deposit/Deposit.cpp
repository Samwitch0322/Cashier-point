#include"Deposit.hpp"

Deposit::Deposit() {}
Deposit::Deposit(Client cliente, string numeroCuenta, string fecha, float importe)
{
    accountNumber = numeroCuenta;
    date = fecha;
    amount = importe;
}

void Deposit::setAccountNumber(string numeroCuenta){
    accountNumber = numeroCuenta;
}
string Deposit::getAccountNumber(){
    return accountNumber;
}
void Deposit::setDate(string fecha){
   date = fecha;
}
string Deposit::getDate(){
    return date;
}
void Deposit::setAmount(float importe){
    amount = importe;
}
float Deposit::getAmount(){
    return amount;
}