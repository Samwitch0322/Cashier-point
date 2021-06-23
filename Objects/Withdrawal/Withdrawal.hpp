#ifndef WITHDRAWAL_HPP
#define WITHDRAWAL_HPP
#include<string>
#include"../Client/Client.hpp"

using namespace std;

class Withdrawal
{
    private:
        Client cliente;
        string accountNumber;
        string date;
        float amount;
        float subtractBalance;
        
    public:
        Withdrawal();
        Withdrawal(Client cliente, string numeroCuenta, string fecha, float importe, float restaBalance);

        Client getCliente();
        string getAccountNumber();
        string getDate();
        float getAmount();
        float getSubtractBalance();
        
        void setCliente(Client cliente);
        void setAccountNumber(string numeroCuenta);
        void setDate(string fecha);
        void setAmount(float importe);
        void setSubtractBalance(float restaBalance);
};   
#endif