#include<string>

using namespace std;

class BankAccount
{
    private:
        string accountType;
        string accountNumber;
        float balance;
        Client cliente;
        // History historial;

    public:
        BankAccount();
        BankAccount(string tipoCuenta, string numeroCuenta, float saldo, Client cliente);

        string getAccountType();
        string getAccountNumber();
		float getBalance();

        void setAccountType(string tipoCuenta);
        void setAccountNumber(string numeroCuenta);
        void setBalance(float saldo);
        
};