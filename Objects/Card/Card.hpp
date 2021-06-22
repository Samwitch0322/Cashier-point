#include<string>

using namespace std;

class Card
{
    private:
        string bank;
        int plasticNumber;
        string securityCode;
        string NIP;

    public:
        Card();
        Card(string banco, int numeroPlastico, string codigoSeguridad, string varNIP);

        string getBank();
        int getPlasticNumber();
        string getSecurityCode();
        string getNIP();
        
        
        void setBank(string banco);
        void setPlasticNumber(int numeroPlastico);
        void setSecurityCode(string codigoSeguridad);
        void setNIP(string varNIP);

};