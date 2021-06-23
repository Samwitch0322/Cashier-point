#ifndef CARD_HPP
#define CARD_HPP
#include<string>
#include "../Validity/Validity.hpp"

using namespace std;

class Card{
    private:
        string bank;
        int plasticNumber;
        string securityCode;
        string NIP;
        

    public:
        Validity validity; 
        Card();
        Card(string banco, int numeroPlastico, string codigoSeguridad, string varNIP, Validity vigencia);

        string getBank();
        int getPlasticNumber();
        string getSecurityCode();
        string getNIP();
        
        
        void setBank(string banco);
        void setPlasticNumber(int numeroPlastico);
        void setSecurityCode(string codigoSeguridad);
        void setNIP(string varNIP);
};
#endif