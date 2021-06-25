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
        Client client;
        string move;
        float cant;
    public:
        Movement();
        Movement(string numeroCuenta, string fecha, Client cliente, string movimiento, float cantidad);

        string getAccountNumber();
        string getDate();
        Client getClient();
        string getMove();
        float getCant();
        void setAccountNumber(string numeroCuenta);
        void setDate(string fecha);
        void setClient(Client cliente);
        void setMove(string movimiento);
        void setCant(float cantidad);
};
#endif