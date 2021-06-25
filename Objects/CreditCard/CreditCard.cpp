
#include "CreditCard.hpp"


CreditCard::CreditCard(float balanceCut, int creditLimit, string banco, string numeroPlastico,  string codigoSeguridad, string varNIP, Validity vigencia):Card(banco, numeroPlastico, codigoSeguridad, varNIP, vigencia)
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


