#include<string>
#include"../Card/Card.hpp"

using namespace std;

class DebitCard : public Card
{
    DebitCard(string banco, int numeroPlastico,  string codigoSeguridad, string varNIP);


};
