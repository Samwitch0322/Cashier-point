#ifndef CASHIER_HPP
#define CASHIER_HPP
#include<string>

using namespace std;

class Cashier
{
    private:
    string code;
    string branchNumber;
    string bank;
    public:
    Cashier();
    Cashier(string codigo, string numeroSucursal, string banco);

    string getCode();
    string getBranchNumber();
    string getBank();
    void setCode(string codigo);
    void setBranchNumber(string numeroSucursal);
    void setBank(string bank);
};
#endif