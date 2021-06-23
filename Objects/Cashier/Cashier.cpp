#include"Cashier.hpp"

Cashier::Cashier() {}
Cashier::Cashier(string codigo, string numeroSucursal, string banco)
{
    code = codigo;
    branchNumber = numeroSucursal;
    bank = banco;
}
void Cashier::setCode(string codigo){
    code = codigo;
}
string Cashier::getCode(){
    return code;
}
void Cashier::setBranchNumber(string numeroSucursal){
    branchNumber = numeroSucursal;
}
string Cashier::getBranchNumber(){
    return branchNumber;
}
void Cashier::setBank(string banco){
    bank = banco;
}
string Cashier::getBank(){
    return bank;
}

