#ifndef DR_HPP
#define DR_HPP
#include<string>

using namespace std;

class Dr
{
	private: 
    string movementType; 
		float amount;
		
    public:
        Dr();
        Dr(string tipoMovimiento, float importe);

        string getMovementType();
        float getAmount();
        
        void setMovementType(string tipoMovimiento);
        void setAmount(float importe);
      
       
};
#endif

    