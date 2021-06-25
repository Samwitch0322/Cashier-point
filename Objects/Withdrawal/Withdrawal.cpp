#include"Withdrawal.hpp"

Withdrawal::Withdrawal() {}
Withdrawal::Withdrawal(Client cliente, string numeroCuenta, string fecha, float importe)
{
    client = cliente;
    accountNumber = numeroCuenta;
    date = fecha;
    amount = importe;
}

Withdrawal::Withdrawal(Client cliente, string numeroCuenta, string fecha, float importe, float restaBalance)
{
    client = cliente;
    accountNumber = numeroCuenta;
    date = fecha;
    amount = importe;
    subtractBalance = restaBalance;
}

void Withdrawal::setAccountNumber(string numeroCuenta){
    accountNumber = numeroCuenta;
}
string Withdrawal::getAccountNumber(){
    return accountNumber;
}
void Withdrawal::setDate(string fecha){
   date = fecha;
}
string Withdrawal::getDate(){
    return date;
}
void Withdrawal::setAmount(float importe){
    amount = importe;
}
float Withdrawal::getAmount(){
    return amount;
}
void Withdrawal::setSubtractBalance(float restaBalance){
    subtractBalance = restaBalance;
}
float Withdrawal::getSubtractBalance(){
    return subtractBalance;
}


void Withdrawal::setClient(Client cliente){
    client = cliente;
}
Client Withdrawal::getClient(){
    return client;
}