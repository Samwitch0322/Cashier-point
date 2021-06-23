#include<string>

using namespace std;

class Movements
{
    private:
        string accountNumber;
        string date;
        Client cliente;
    public:
        Movements();
        Movements(string numeroCuenta, string fecha, Client cliente);

        string getAccountNumber();
        string getDate();
        Client getCliente();
        void setAccountNumber(string numeroCuenta);
        void setDate(string fecha);
        void setCliente(Client cliente);
};