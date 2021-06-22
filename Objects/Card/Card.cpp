#include "Card.hpp"

Card::Card() {}

Card::Card(string banco, int numeroPlastico, string codigoSeguridad, string varNIP)
{
    bank = banco;
    plasticNumber = numeroPlastico;
    NIP = varNIP;
    securityCode = codigoSeguridad;
}

void Card::setBank(string banco){
    bank = banco;
}
string Card::getBank(){
    return bank;
}
  void Card::setPlasticNumber(int numeroPlastico){
    plasticNumber = numeroPlastico;
}
int Card::getPlasticNumber(){
    return plasticNumber;
}
  void Card::setNIP(string varNIP){
    NIP = varNIP;
}
string Card::getNIP(){
    return NIP;
}
  void Card::setSecurityCode(string codigoSeguridad){
    securityCode = codigoSeguridad;
}
string Card::getSecurityCode(){
    return securityCode;
}
