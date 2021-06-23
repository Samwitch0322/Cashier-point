#include "Dr.hpp"

Dr::Dr() {}

Dr::Dr(string tipoMovimiento, float importe)
{
    movementType = tipoMovimiento;
    amount = importe;
}
void Dr::setMovementType(string tipoMovimiento){
    movementType = tipoMovimiento;
}
string Dr::getMovementType(){
    return movementType;
}
  void Dr::setAmount(float importe){
    amount = importe;
}
float Dr::getAmount(){
    return amount;
}