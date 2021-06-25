#ifndef CARD_HPP
#define CARD_HPP
#include<string>
#include "../Validity/Validity.hpp"

using namespace std;

class Card{
    private:
        string bank;
        string plasticNumber;
        string securityCode;
        string NIP;
        

    public:
        Validity validity; 
        Card();
        Card(string banco, string numeroPlastico, string codigoSeguridad, string varNIP, Validity vigencia);

        string getBank();
        string getPlasticNumber();
        string getSecurityCode();
        string getNIP();
        
        
        void setBank(string banco);
        void setPlasticNumber(string numeroPlastico);
        void setSecurityCode(string codigoSeguridad);
        void setNIP(string varNIP);
};
#endif