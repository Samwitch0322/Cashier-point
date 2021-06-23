#ifndef DEPOSIT_HPP
#define DEPOSIT_HPP
#include<string>
#include"../Client/Client.hpp"

using namespace std;

class Deposit
{
    private:
        Client cliente;
        string accountNumber;
        string date;
        float amount;
        
    public:
        Deposit();
        Deposit(Client cliente, string numeroCuenta, string fecha, float importe);

        Client getCliente();
        string getAccountNumber();
        string getDate();
        float getAmount();
        
        void setCliente(Client cliente);
        void setAccountNumber(string numeroCuenta);
        void setDate(string fecha);
        void setAmount(float importe);
};   
#endif