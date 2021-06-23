#ifndef ACCOUNTACCESS_HPP
#define ACCOUNTACCESS_HPP
#include<string>
#include"../Client/Client.hpp"

using namespace std;

class AccountAccess
{
    private:
    Client cliente;
    string password;
    public:
        AccountAccess();
        AccountAccess(Client cliente, string contrasenia);
        
        Client getCliente();
        string getPassword();
        void setCliente(Client cliente);
        void setPassword(string contrasenia);

};
#endif