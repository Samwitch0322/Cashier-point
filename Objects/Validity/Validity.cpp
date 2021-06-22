#include "Validity.hpp"

Validity::Validity() {}

Validity::Validity(string mes, int anio)
{
    month = mes;
    year = anio;

}

void Validity::setMonth(string mes){
    month = mes;
}
string Validity::getMonth(){
    return month;
}
void Validity::setYear(int anio){
    year = anio;
}
int Validity::getYear(){
    return year;
}