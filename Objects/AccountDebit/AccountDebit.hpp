#ifndef ACCOUNTDEBIT_HPP
#define ACCOUNTDEBIT_HPP
#include<string>
#include"../Client/Client.hpp"
#include"../History/History.hpp"


using namespace std;

class AccountDebit
{
    private:
        string accountNumber;
        float balance;
        Client client;
        History history;
       
    public:
        
        AccountDebit();
        AccountDebit(string numeroCuenta, float varBalance, Client cliente);
        AccountDebit(string numeroCuenta, float varBalance, Client cliente, History historial);

      
        string getAccountNumber();
        float getBalance();
        Client getCliente();
        History getHistory();

        void setAccountNumber(string numeroCuenta);
        void setBalance(float varBalance);
        void setCliente(Client cliente);
        void setHistory(History historial);
    
};   
#endif