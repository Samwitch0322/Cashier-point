#include "Card.hpp"

Card::Card() {}

Card::Card(string banco, int numeroPlastico, string varNIP)
{
    bank = banco;
    plasticNumber = numeroPlastico;
    NIP = varNIP;
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
