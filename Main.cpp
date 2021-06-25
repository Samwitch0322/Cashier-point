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

using namespace std;
 
int main (){
    SystemBank system("1.0");
    Client client1("Nicolas Vazquez","MELM8305281H0", "Priv. Jardineros 10");
    AccountAccess acountAccess_client1(client1, "poo2021");
    BankAccount bankAccount_1("Credito", "56545676543456787654345654", 5000.9, client1);
    AccountDebit accountDebit_1("56545676543456787654345654", 5000.9, client1);
    Validity validity("03", 25);
    DebitCard tarjetaDebito_1("Santander", "5579667855796678", "880", "2203", validity);

    cout<<endl<<endl<<endl;
    cout<<"El cliente "<<client1.getNombre()<<" va al banco a hacer unos movimientos"<<endl;
    cout<<"Ingreso la tarjeta con numero de plastico: "<<tarjetaDebito_1.getPlasticNumber()<<endl;
    cout<<"Ingreso la contrasenia: "<<acountAccess_client1.getPassword()<<endl;
    
    if(system.validateClient(acountAccess_client1)){
        cout<<"Acceso a la plataforma"<<endl;

    }else{
        cout<<"Sus datos no coinciden"<<endl;
    }
    
    /*
    Client client2("Samantha Izarraz","SMEX34332JM00", "Isla Ocotlan 43");
    AccountAccess acountAccess_client2(client1, "poo2022");
    BankAccount bankAccount_2("Debito", "56557645454656654345654", 300000.0, client2);
    */
    

           
    //1. El **cliente**, utilizará su **tarjeta** para acceder, a través del **cajero**, al **sistema** de **movimientos**. 


    /*
    5. El sistema debe validar al cliente a través de una cuenta de acceso. 
	    1. La cuenta de acceso asocia a un  cliente con un password.
    */
 

    /* Los **tipos de movimiento** que se realizan a través del Sistema son:	
        1. Validar al cliente
        2. Consultar  saldo
        3. Depositar en efectivo
        4. Retirar de efectivo
        5. Almacenar movimientos.
        6. Consultar movimientos*/
    
    cout<<endl<<endl<<endl;
    return 0;
}
