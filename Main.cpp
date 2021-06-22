#include "Objects/Client/Client.cpp"

#include <stdlib.h>
#include <iostream>
#include <string>

using namespace std;
 
int main (){
    Client client1("Nicolas Vazquez","MELM8305281H0", "Priv. Jardineros 10");
    
    cout<< client1.getDomicilio() << endl;


return 0;
}
