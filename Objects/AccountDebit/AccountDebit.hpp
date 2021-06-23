#ifndef ACCOUNTDEBIT_HPP
#define ACCOUNTDEBIT_HPP
#include<string>
#include"../Client/Client.hpp"

using namespace std;

class AccountDebit
{
    private:
    string accountNumber;
    float balance;
    Client cliente;
    public:
    AccountDebit();
    AccountDebit(string numeroCuenta, float varBalance, Client cliente);

    string getAccountNumber();
    float getBalance();
    Client getCliente();
    void setAccountNumber(string numeroCuenta);
    void setBalance(float varBalance);
    void setCliente(Client cliente);
    
};   
#endif