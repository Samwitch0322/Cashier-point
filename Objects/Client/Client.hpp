#ifndef CLIENT_HPP
#define CLIENT_HPP
#include<string>

using namespace std;

class Client 
{
	private: 
		string nombre;
		string RFC;
		string domicilio;
        
    public:
        Client();
        Client(string name, string varRFC, string addresses);

        string getNombre();
        string getRFC();
        string getDomicilio();
        
        void setNombre(string name);
        void setRFC(string varRFC);
        void setDomicilio(string addresses);
     
};
#endif