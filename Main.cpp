#include <stdlib.h>
#include <iostream>
#include<string>

#include "Objects/Client/Client.cpp"
#include "Objects/Validity/Validity.cpp"
#include "Objects/Card/Card.cpp"
#include "Objects/DebitCard/DebitCard.cpp"

using namespace std;
 
int main (){
    Client client1("Nicolas Vazquez","MELM8305281H0", "Priv. Jardineros 10");
    Validity vigencia("03", 25);
    DebitCard tarjetaDebito("Santander", 5579, "880", "2203", vigencia);
           
    //1. El **cliente**, utilizará su **tarjeta** para acceder, a través del **cajero**, al **sistema** de **movimientos**. 

    
    cout<< tarjetaDebito.getBank() << endl;
    cout<< tarjetaDebito.validity.getMonth() <<endl;

    return 0;
}
