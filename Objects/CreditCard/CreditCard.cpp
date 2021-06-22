
#include "CreditCard.hpp"


CreditCard::CreditCard(float balanceCut, int creditLimit, string banco, int numeroPlastico,  string codigoSeguridad, string varNIP)
{
    balanceAlCorte = balanceCut;
    limiteCredito = creditLimit;
}
void CreditCard::setBalanceAlCorte(float balanceCut){
    balanceAlCorte = balanceCut;
}
float CreditCard::getBalanceAlCorte(){
    return balanceAlCorte;
}
void CreditCard::setLimiteCredito(int creditLimit){
    limiteCredito = creditLimit;
}
int CreditCard::getlimiteCredito(){
    return limiteCredito;
}


