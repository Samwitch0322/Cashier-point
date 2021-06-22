#include<string>
#include"../Card/Card.hpp"

using namespace std;

class CreditCard : public Card
{
    private:
        float balanceAlCorte;
        int limiteCredito;

    public:
        CreditCard(float balanceCut, int creditLimit, string banco, int numeroPlastico,  string codigoSeguridad, string varNIP);

        float getBalanceAlCorte();
        int getlimiteCredito();
        
        void setBalanceAlCorte(float balanceCut);
        void setLimiteCredito(int creditLimit);



};