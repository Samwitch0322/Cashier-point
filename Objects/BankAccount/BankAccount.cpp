#include"BankAccount.hpp"

BankAccount::BankAccount() {}
BankAccount::BankAccount(string tipoCuenta, string numeroCuenta, float saldo, Client cliente)
{
    accountType = tipoCuenta;
    accountNumber = numeroCuenta;
    balance = saldo;
}

void BankAccount::setAccountType(string tipoCuenta){
    accountType = tipoCuenta;
}
string BankAccount::getAccountType(){
    return accountType;
}
void BankAccount::setAccountNumber(string numeroCuenta){
    accountNumber = numeroCuenta;
}
string BankAccount::getAccountNumber(){
    return accountNumber;
}
void BankAccount::setBalance(float saldo){
    balance = saldo;
}
float BankAccount::getBalance(){
    return balance;

}; 