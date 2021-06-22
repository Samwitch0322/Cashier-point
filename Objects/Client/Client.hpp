#include<string>

using namespace std;

class Cliente 
{
	private: 
		string nombre;
		string RFC;
		string domicilio;
        
    public:
        Cliente();
        Cliente(string name, string varRFC, string addresses);

        string getNombre();
        string getRFC();
        string getDomicilio();
        
        void setNombre(string name);
        void setRFC(string varRFC);
        void setDomicilio(string addresses);
     
}