#include"AccountDebit.hpp"

AccountDebit::AccountDebit() {}
AccountDebit::AccountDebit(string numeroCuenta, float varBalance, Client cliente)
{
    accountNumber = numeroCuenta;
    balance = varBalance;
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
