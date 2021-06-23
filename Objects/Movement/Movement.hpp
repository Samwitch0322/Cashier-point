#ifndef MOVEMENT_HPP
#define MOVEMENT_HPP
#include<string>
#include"../Client/Client.hpp"

using namespace std;

class Movement
{
    private:
        string accountNumber;
        string date;
        Client cliente;
    public:
        Movement();
        Movement(string numeroCuenta, string fecha, Client cliente);

        string getAccountNumber();
        string getDate();
        Client getCliente();
        void setAccountNumber(string numeroCuenta);
        void setDate(string fecha);
        void setCliente(Client cliente);
};
#endif