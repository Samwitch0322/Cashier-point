#ifndef ACCOUNTACCESS_HPP
#define ACCOUNTACCESS_HPP
#include<string>
#include"../Client/Client.hpp"

using namespace std;

class AccountAccess
{
    private:
        Client client;
        string password;
    public:
        AccountAccess();
        AccountAccess(Client cliente, string contrasenia);
        
        Client getClient();
        string getPassword();
        void setClient(Client cliente);
        void setPassword(string contrasenia);

};
#endif