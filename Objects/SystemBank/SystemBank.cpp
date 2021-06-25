#include"SystemBank.hpp"

SystemBank::SystemBank() {}
SystemBank::SystemBank(string varVersion){
    version = varVersion;
    Client client1("Nicolas Vazquez","MELM8305281H0", "Priv. Jardineros 10");
    Client client2("Samantha Izarraz","SMEX34332JM00", "Isla Ocotlan 43");
    clients[0] = client1;
    clients[1] = client2;

    AccountAccess accountAccess1(client1, "poo2021");
    AccountAccess accountAccess2(client2, "poo2022");
  
    accountsAccess[0] = accountAccess1;
    accountsAccess[1] = accountAccess2;
}

bool SystemBank::validateClient(AccountAccess newAccess){
    int validateRFC = false;
    int validatePass = false;

    //Obtengo el numero de elemento en un arreglo de objetos
    int arrClientSize = sizeof(clients)/sizeof(clients[0]);
    int arrAccountsAccessSize = sizeof(accountsAccess)/sizeof(accountsAccess[0]);

    for(int i=0; i < arrClientSize; i++){
        if(newAccess.getClient().getRFC() == clients[i].getRFC()){
            validateRFC = true;
        }
    }

    if(validateRFC == true){
        for(int i=0; i < arrAccountsAccessSize; i++){
            if(newAccess.getPassword() == accountsAccess[i].getPassword()){
                validatePass = true;
            }
        }
    }

    if(validateRFC == false){
        cout<<"Acceso denegado: Su RFC no coincide"<<endl;
    }else if(validatePass == false){
        cout<<"Acceso denegado: Su contrasenia no coincide"<<endl;
    }else{
        return true;
    }

    return false;
}

// retiro De Efectivo
float SystemBank::cashWithdrawal(AccountDebit accountDebit, Withdrawal withdrawal){
    cout<<"Se retira: $"<<withdrawal.getAmount()<<endl;
    cout<<"Saldo Anterior: $"<<accountDebit.getBalance()<<endl;
    float balance = accountDebit.getBalance();
    balance = balance - withdrawal.getAmount();
    accountDebit.setBalance(balance);
    cout<<"Saldo Actual: $"<<accountDebit.getBalance()<<endl;
    return accountDebit.getBalance();
}

// deposito En Efectivo 
float SystemBank::cashDeposit(AccountDebit accountDebit, Deposit deposit){
    cout<<"Se depositan: $"<<deposit.getAmount()<<endl;
    cout<<"Saldo Anterior: $"<<accountDebit.getBalance()<<endl;
    float balance = accountDebit.getBalance();
    balance = balance + deposit.getAmount();
    accountDebit.setBalance(balance);
    cout<<"Saldo Actual: $"<<accountDebit.getBalance()<<endl;
    return accountDebit.getBalance();
}

//consulta De Saldo
void SystemBank::balanceInquiry(){}
        
//consuta De Movimientos
void SystemBank::queryMovement(){}
