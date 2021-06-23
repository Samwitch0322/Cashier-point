#ifndef HISTORY_HPP
#define HISTORY_HPP
#include<string>
#include"../Movement/Movement.hpp"

using namespace std;

class History
{
    private:
        Movement movimientos[0];

    public:
    History();
    void add(Movement movimiento); 
    int getMovement(int position);
    void toDeploy(); 

};
#endif
