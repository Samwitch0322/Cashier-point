#ifndef SYSTEMBANK_HPP
#define SYSTEMBANK_HPP
#include <stdlib.h>
#include <iostream>
#include <string>

#include "../Client/Client.hpp"
#include "../AccountAccess/AccountAccess.hpp"
#include "../History/History.hpp"
#include "../Movement/Movement.hpp"

using namespace std;

class SystemBank
{
    private:
        string version;
       
        Client clients[2];
	    AccountAccess accountsAccess[2];
	    History movimientos[0];
    public:
        SystemBank();
        SystemBank(string varVersion);
       
        void addClient(Client newClient);
        void addMovement(Movement movement);
        void addAccountAccess(AccountAccess newAccess);

        bool validateClient(AccountAccess newAccess);
        // retiro De Efectivo
        void cashWithdrawal();

        // deposito En Efectivo 
        void cashDeposit();

        //consulta De Saldo
        void balanceInquiry();
        
        //consuta De Movimientos
        void queryMovement();
        /**/

};
#endif