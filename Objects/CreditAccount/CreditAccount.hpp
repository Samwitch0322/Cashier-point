#ifndef CREDITACCOUNT_HPP
#define CREDITACCOUNT_HPP
#include<string>
#include"../Client/Client.hpp"

using namespace std;

class CreditAccount
{
    private:
    string accountNumber;
    float balance;
    Client cliente;
    public:
    CreditAccount();
    CreditAccount(string numeroCuenta, float varBalance, Client cliente);

    string getAccountNumber();
    float getBalance();
    Client getCliente();
    void setAccountNumber(string numeroCuenta);
    void setBalance(float varBalance);
    void setCliente(Client cliente);
    
};   
#endif