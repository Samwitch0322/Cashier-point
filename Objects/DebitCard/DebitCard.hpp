#ifndef DEBITCARD_HPP
#define DEBITCARD_HPP
#include"../Card/Card.hpp"
#include"../Validity/Validity.hpp"

using namespace std;


class DebitCard : public Card
{
    private:
    
    public:
        DebitCard(string banco, string numeroPlastico,  string codigoSeguridad, string varNIP, Validity vigencia);

};
#endif