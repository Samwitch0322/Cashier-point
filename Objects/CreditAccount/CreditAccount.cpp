#include"CreditAccount.hpp"

CreditAccount::CreditAccount() {}
CreditAccount::CreditAccount(string numeroCuenta, float varBalance, Client cliente)
{
    accountNumber = numeroCuenta;
    balance = varBalance;
}

void CreditAccount::setAccountNumber(string numeroCuenta){
    accountNumber = numeroCuenta;
}
string CreditAccount::getAccountNumber(){
    return accountNumber;
}
void CreditAccount::setBalance(float varBalance){
    balance = varBalance;
}
float CreditAccount::getBalance(){
    return balance;
}; 
