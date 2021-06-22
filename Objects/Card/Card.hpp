#include<string>

using namespace std;

class Card
{
    private:
        string bank;
        int plasticNumber;
        string NIP;

    public:
        Card();
        Card(string banco, int numeroPlastico, string varNIP);

        string getBank();
        int getPlasticNumber();
        string getNIP();
        
        void setBank(string banco);
        void setPlasticNumber(int numeroPlastico);
        void setNIP(string varNIP);

};