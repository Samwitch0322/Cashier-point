#include<string>
#ifndef CREDITCARD_HPP
#define CREDITCARD_HPP
#include"../Card/Card.hpp"
#include"../Validity/Validity.hpp"

using namespace std;

class CreditCard : public Card
{
    private:
        float balanceAlCorte;
        int limiteCredito;

    public:
        CreditCard(float balanceCut, int creditLimit, string banco, int numeroPlastico,  string codigoSeguridad, string varNIP, Validity vigencia);

        float getBalanceAlCorte();
        int getlimiteCredito();
        
        void setBalanceAlCorte(float balanceCut);
        void setLimiteCredito(int creditLimit);
};
#endif