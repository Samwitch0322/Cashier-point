#ifndef VALIDITY_HPP
#define VALIDITY_HPP
#include<string>

using namespace std;

class Validity{
    private:
        string month;
        int year;

	public:
		Validity();
		Validity(string mes, int anio);
        
		string getMonth();
		int getYear();

        void setMonth(string mes);
        void setYear(int anio);

}; 
#endif