#include"AccountDebit.hpp"

AccountDebit::AccountDebit() {}

AccountDebit::AccountDebit(string numeroCuenta, float varBalance, Client cliente){
    accountNumber = numeroCuenta;
    balance = varBalance;
    client = cliente;
}
AccountDebit::AccountDebit(string numeroCuenta, float varBalance, Client cliente, History historial){
    accountNumber = numeroCuenta;
    balance = varBalance;
    client = cliente;
    history = historial;
}

void AccountDebit::setAccountNumber(string numeroCuenta){
    accountNumber = numeroCuenta;
}
string AccountDebit::getAccountNumber(){
    return accountNumber;
}
void AccountDebit::setBalance(float varBalance){
    balance = varBalance;
}
float AccountDebit::getBalance(){
    return balance;
}; 

void AccountDebit::setHistory(History historial){
    history = historial;
}
History AccountDebit::getHistory(){
    return history;
}
