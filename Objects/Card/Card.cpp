#include "Card.hpp"

Card::Card() {}

Card::Card(string banco, string numeroPlastico, string codigoSeguridad, string varNIP, Validity vigencia)
{
    bank = banco;
    plasticNumber = numeroPlastico;
    NIP = varNIP;
    securityCode = codigoSeguridad;
    validity = vigencia;
}

void Card::setBank(string banco){
    bank = banco;
}
string Card::getBank(){
    return bank;
}
  void Card::setPlasticNumber(string numeroPlastico){
    plasticNumber = numeroPlastico;
}
string Card::getPlasticNumber(){
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
