#include <stdlib.h>
#include <iostream>
#include <string>

#include "Objects/Client/Client.cpp"
#include "Objects/Validity/Validity.cpp"
#include "Objects/Card/Card.cpp"
#include "Objects/DebitCard/DebitCard.cpp"
#include "Objects/AccountAccess/AccountAccess.cpp"
#include "Objects/BankAccount/BankAccount.cpp"
#include "Objects/AccountDebit/AccountDebit.cpp"

#include "Objects/SystemBank/SystemBank.cpp"
#include "Objects/Deposit/Deposit.cpp"
#include "Objects/History/History.cpp"
#include "Objects/Movement/Movement.cpp"

#include "Objects/Withdrawal/Withdrawal.cpp"



using namespace std;
 
int main (){
    SystemBank system("1.0");
    Client client1("Nicolas Vazquez","MELM8305281H0", "Priv. Jardineros 10");
    History history_client1;
    AccountAccess acountAccess_client1(client1, "poo2021");
    BankAccount bankAccount_1("Credito", "56545676543456787654345654", 5000.9, client1);
    AccountDebit accountDebit_1("56545676543456787654345654", 5000.0, client1, history_client1);

    Validity validity("03", 25);
    DebitCard tarjetaDebito_1("Santander", "5579667855796678", "880", "2203", validity);

    cout<<endl<<endl<<endl;
    cout<<"El cliente "<<client1.getNombre()<<" va al banco a hacer unos movimientos"<<endl;
    cout<<"Ingreso la tarjeta con numero de plastico: "<<tarjetaDebito_1.getPlasticNumber()<<endl;
    cout<<"Ingreso la contrasenia: "<<acountAccess_client1.getPassword()<<endl;
    
    //1. Validar al cliente
    if(system.validateClient(acountAccess_client1)){
        cout<<"Acceso a la plataforma"<<endl;
        //2. Depositar en efectivo.
        Deposit deposit1(client1, accountDebit_1.getAccountNumber(), "25/06/2020", 2000.0);
        accountDebit_1.setBalance(system.cashDeposit(accountDebit_1, deposit1)); 

        Movement move_1(accountDebit_1.getAccountNumber(), deposit1.getDate(), deposit1.getClient(), "Deposito", deposit1.getAmount());
        
        accountDebit_1.getHistory().add(move_1);


        Withdrawal withdrawal_1(client1, accountDebit_1.getAccountNumber(), "29/06/2020", 5500.50);
        accountDebit_1.setBalance(system.cashWithdrawal(accountDebit_1, withdrawal_1)); 

        Movement move_2(accountDebit_1.getAccountNumber(), withdrawal_1.getDate(), withdrawal_1.getClient(), "Retiro", withdrawal_1.getAmount());
        accountDebit_1.getHistory().add(move_2);

        //accountDebit_1.getHistory().toDeploy();
    }else{
        cout<<"Sus datos no coinciden"<<endl;
    }
    
    /*
    ***********************************
    */
    Client client2("Samantha Izarraz","SMEX34332JM00", "Isla Ocotlan 43");
    History history_client2;
    AccountAccess acountAccess_client2(client2, "poo2022");
    BankAccount bankAccount_2("Debito", "56557645454656654345654", 300000.0, client2);
    AccountDebit accountDebit_2("56545676543456787654345654", 5000.0, client2, history_client2);

    Validity validity2("03", 25);
    DebitCard tarjetaDebito_2("Banorte", bankAccount_2.getAccountNumber(), "880", "2203", validity2);

    cout<<endl<<endl<<endl;
    cout<<"El cliente "<<client2.getNombre()<<" va al banco a hacer unos movimientos"<<endl;
    cout<<"Ingreso la tarjeta con numero de plastico: "<<tarjetaDebito_2.getPlasticNumber()<<endl;
    cout<<"Ingreso la contrasenia: "<<acountAccess_client2.getPassword()<<endl;
    
    //1. Validar al cliente
    if(system.validateClient(acountAccess_client2)){
        cout<<"Acceso a la plataforma"<<endl;
        //2. Depositar en efectivo.
        Deposit deposit21(client2, accountDebit_2.getAccountNumber(), "25/06/2020", 20000.0);
        accountDebit_2.setBalance(system.cashDeposit(accountDebit_2, deposit21)); 

        Movement move_21(accountDebit_2.getAccountNumber(), deposit21.getDate(), deposit21.getClient(), "Deposito", deposit21.getAmount());
        
        accountDebit_2.getHistory().add(move_21);

        //accountDebit_1.getHistory().toDeploy();
    }else{
        cout<<"Sus datos no coinciden"<<endl;
    }
    

           
    
    
    cout<<endl<<endl<<endl;
    return 0;
}