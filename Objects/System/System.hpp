#ifndef SYSTEM_HPP
#define SYSTEM_HPP
#include<string>

using namespace std;

class System
{
    private:
    string version;

    public:
    System();
    System(string varVersion);
    bool validateClient();
    void queryData();
    void cashWithdrawal();
    void storesMovement();
    void balanceInquiry();

};
#endif